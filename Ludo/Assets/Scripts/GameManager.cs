using Assets.Scripts;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Runtime.InteropServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    private string roomId;
    private int rollVal;

    [DllImport("__Internal")]
    private static extern void HandleUnityMessage(string message);

    [SerializeField]
    private float pieceMoveSpeed;
    [SerializeField]
    private GameObject homePrefab;
    [SerializeField]
    private GameObject pawnPrefab;

    [SerializeField]
    private Vector3[] homePositions;
    [SerializeField]
    private Material[] teamColours;

    [SerializeField]
    private GameObject homesObject;
    [SerializeField]
    private GameObject[] tiles;
    [SerializeField]
    private GameObject[] goals;
    [SerializeField]
    private Player[] players;
    [SerializeField]
    private Player ownPlayer;
    [SerializeField]
    private Pawn[] playerPawns;
    [SerializeField]
    private Camera mainCam;
    [SerializeField]
    private Transform camPoints;

    private Pawn selectedPawn = null;
    private long playerTurn = 0;

    void Start()
    {
        //avoid capturing all input to enable chatting
        WebGLInput.captureAllKeyboardInput = false;

        for (int i = 0; i < 4; i++)
        {
            //assing homes and materials for said homes
            GameObject home = Instantiate(homePrefab, homePositions[i], Quaternion.identity);
            home.GetComponent<MeshRenderer>().material = teamColours[i];

            //group under single game object
            home.transform.SetParent(homesObject.transform);

            //assign goal colour
            goals[i].GetComponent<MeshRenderer>().material = teamColours[i];

            //assign colors for tiles if not the usualy accent colour
            tiles[(i * 13) + 2].GetComponent<MeshRenderer>().material = teamColours[i];

            for (int j = 0; j < 5; j++)
            {
                tiles[52 + j + (i * 5)].GetComponent<MeshRenderer>().material = teamColours[i];
            }
        }

        //send go ahead to js so that we can get the start data
        SendMessageToJS(JsonUtility.ToJson(new GameMessage(string.Empty, "READY", null)));
    }

    [SerializeField]
    private float camMoveSpeed;

    private bool changingTurns = false;

    Transform newTeamTrans;
    private void Update()
    {
        //register if the left mouse button is being clicked
        if (Input.GetButtonDown("Fire1"))
        {
            //create a raycast from the camera
            RaycastHit hit;
            Ray ray = mainCam.ScreenPointToRay(Input.mousePosition);

            //check if anything is being hit
            if (Physics.Raycast(ray, out hit))
            {
                //get the hit object
                GameObject obj = hit.transform.gameObject;

                //get the pawn data attached to the object, if any
                Pawn p = obj.GetComponent<Pawn>();
                if (p != null)
                {
                    //handle pawn selection
                    SelectPawn(p);
                }
            }
        }

        //reset selected pawn when the left mouse button is being lifted
        if (Input.GetButtonUp("Fire1"))
            selectedPawn = null;

        //check if we're currently changing turns
        if (changingTurns)
        {
            //lerp towards the new destination
            mainCam.transform.position = Vector3.Lerp(mainCam.transform.position, newTeamTrans.position, camMoveSpeed * Time.deltaTime);
            mainCam.transform.rotation = Quaternion.Lerp(mainCam.transform.rotation, newTeamTrans.rotation, camMoveSpeed * Time.deltaTime);

            //if the camera is 'close enough' to the end point, stop moving the camera (to have a sort of ease in effect)
            if (Vector3.Distance(mainCam.transform.position, newTeamTrans.position) < 0.02f)
            {
                changingTurns = false;
            }
        }
    }

    /// <summary>
    /// Moves the selected pawn to the team goal
    /// </summary>
    /// <param name="idx">the pawn id</param>
    void MovePawnToGoal(int idx)
    {
        //get pawn data
        Pawn pawn = playerPawns[idx];

        int availableSpot = 0;

        //get goal transform
        Transform goal = tiles[72 + pawn.TeamId].transform;
        //find an empty spot
        for (int j = 0; j < 4; j++)
        {
            if (goal.GetChild(j).childCount < 1)
            {
                availableSpot = j;
                break;
            }
        }

        //move the pawn
        pawn.transform.position = goal.GetChild(availableSpot).position;
        //nest the pawn object to the goal object
        pawn.transform.SetParent(goal.GetChild(availableSpot).transform);
    }

    /// <summary>
    /// Moves the selected pawn to a home spot
    /// </summary>
    /// <param name="idx">the pawn id</param>
    void MovePawnToHome(int idx)
    {
        //get pawn data
        Pawn pawn = playerPawns[idx];

        int availableSpot = 0;

        //get home transform
        Transform home = homesObject.transform.GetChild(4 + pawn.TeamId);
        //find available spot to stand on
        for (int j = 0; j < 4; j++)
        {
            if (home.GetChild(j).GetChild(0).childCount < 1)
            {
                availableSpot = j;
                break;
            }
        }

        //move the pawn
        pawn.transform.position = home.GetChild(availableSpot).GetChild(0).position;
        //nest the pawn to the goal transform
        pawn.transform.SetParent(home.transform.GetChild(availableSpot).GetChild(0).transform);
    }

    [SerializeField]
    Canvas canvas;

    /// <summary>
    /// Initializes the ludo game
    /// </summary>
    void Initialize()
    {
        //set roll button to active
        canvas.transform.GetChild(0).gameObject.SetActive(true);

        //set pawn data
        for (int i = 0; i < players.Length; i++)
        {
            //get home transform
            Transform home = homesObject.transform.GetChild(players[i].TeamId + 4);

            //fill it with pawns
            for (int j = 0; j < 4; j++)
            {
                //spawn pawn object into the world
                GameObject pawn = Instantiate(pawnPrefab, home.GetChild(j).GetChild(0).position, Quaternion.identity);
                //get the mesh renderer and set the colour to match the team
                pawn.GetComponent<MeshRenderer>().material = teamColours[players[i].TeamId];
                //get the pawn data
                Pawn p = pawn.GetComponent<Pawn>();

                //set pawn data
                p.Id = (i * 4) + j;
                p.Position = -1;
                p.Owner = players[i].Id;
                p.TeamId = players[i].TeamId;

                //insert into pawn collection
                playerPawns[p.Id] = p;

            }
        }
    }

    /// <summary>
    /// Selects a pawn and sends the data of that pawn to the server for processing
    /// </summary>
    /// <param name="pawn">the pawn being selected</param>
    void SelectPawn(Pawn pawn)
    {
        //sets the selected pawn
        selectedPawn = pawn;

        //makes sure the pawn is owned by the player who's currently playing out their turn
        if (selectedPawn != null &&
            selectedPawn.Owner == ownPlayer.Id &&
           playerTurn == ownPlayer.Id)
        {
            //create json object with the selection move data
            var json = new GameMessage(roomId, "MOVE", selectedPawn.Id.ToString());
            //send message
            SendMessageToJS(JsonUtility.ToJson(json));
        }
    }

    /// <summary>
    /// Requests a die roll from the server
    /// </summary>
    public void Roll()
    {
        //if it's the current player's turn
        if (playerTurn == ownPlayer.Id)
        {
            //create roll request
            var json = new GameMessage(roomId, "ROLL", null);
            //send message to server
            SendMessageToJS(JsonUtility.ToJson(json));
        }
    }

    /// <summary>
    /// Sends a message to the overlying javascript bridge
    /// </summary>
    /// <param name="msg"></param>
    public void SendMessageToJS(string msg)
    {
        HandleUnityMessage(msg);
    }

    /// <summary>
    /// Processes a message coming from the javascript bridge
    /// </summary>
    /// <param name="message">the message in string representation</param>
    public void HandleMessageFromJS(string message)
    {
        //de-JSONify the message
        GameMessage msg = JsonUtility.FromJson<GameMessage>(message);

        switch (msg.Action)
        {
            case "INIT":
                //initialize the game by setting data
                roomId = msg.RoomId;
                string[] args = msg.Args.Split('\n');

                //set own player data
                players = new Player[args.Length - 1];

                //get own id
                long.TryParse(args[0], NumberStyles.Integer, CultureInfo.InvariantCulture, out long id);

                //create and link player data
                for (int i = 0; i < args.Length - 1; i++)
                {
                    //get each player object
                    string[] obj = args[i + 1].Split('|');
                    try
                    {
                        //assign playerdata to players
                        //assign different team id's based on number of players, to prevent unfair games as much as possible
                        if (args.Length > 3)
                            players[i] = new Player(long.Parse(obj[0], NumberStyles.Integer, CultureInfo.InvariantCulture), obj[1], i);
                        else
                            players[i] = new Player(long.Parse(obj[0], NumberStyles.Integer, CultureInfo.InvariantCulture), obj[1], (i) * 2);

                        //get name for debugging
                        //string textVal = players[i].Name;

                        //set the UI display for the player
                        var trans = canvas.transform.GetChild(2).GetChild(players[i].TeamId);
                        trans.gameObject.SetActive(true);
                        trans.GetChild(1).gameObject.SetActive(true);
                        trans.GetChild(1).GetComponent<TextMeshProUGUI>().SetText(players[i].Name);

                        //set the own player object
                        if (players[i].Id == id)
                        {
                            ownPlayer = players[i];
                        }
                    }
                    catch (Exception)
                    {
                        throw;
                    }
                }

                Initialize();
                break;
            case "ROLL":
                //set roll value
                rollVal = int.Parse(msg.Args);

                UpdateRollVal();
                break;
            case "NEXTTURN":
                //update the turn
                UpdateTurn(long.Parse(msg.Args));
                break;
            case "MOVE":
                //move pawn(arg 0) to position(arg 1)
                string[] a = msg.Args.Split('|');
                //ignore move to goal calls
                if (int.Parse(a[1]) == -2)
                    break;
                //move pawn
                MovePawn(int.Parse(a[0]), int.Parse(a[1]));
                break;
            case "GOAL":
                //move the pawn to goal
                MovePawnToGoal(int.Parse(msg.Args));
                break;
            default:
                break;
        }
    }

    //offsets for moving pawns on the same tile
    readonly float[,] pawnFriendPositions =
        new float[,] {
            { 0.15f, 0.15f },
            { 0.15f, -0.15f},
            { -0.15f, -0.15f},
            { -0.15f, 0.15f}
        };

    /// <summary>
    /// Moves a pawn to a specific tile
    /// </summary>
    /// <param name="pId">pawn id</param>
    /// <param name="pos">tile position</param>
    void MovePawn(int pId, int pos)
    {
        //get pawn data
        Pawn pawn = playerPawns[pId];
        //hold on to previous position
        int previousPos = pawn.Position;

        //move to home
        if (pos == -1)
        {
            pawn.Position = pos;
            pawn.transform.GetChild(0).gameObject.SetActive(false);
            MovePawnToHome(pId);
            return;
        }

        //pawn.transform.GetChild(0).gameObject.SetActive(false);
        int res = pos == -1 ? 0 : (pos - pawn.Position);

        //move pawn to tile
        pawn.transform.position = tiles[pos].transform.GetChild(0).position;
        //set pawn position
        pawn.Position = pos;

        //get friendly pawns on tile
        IEnumerable<Pawn> friendPawns = playerPawns.Where(p => p.TeamId == pawn.TeamId && p.Position == pawn.Position);

        //check whether the pawn should be safe
        bool safe = (tiles[pawn.Position].GetComponent<Tile>().Type & (int)TileType.GLOBE) == (int)TileType.GLOBE || friendPawns.Count() > 1;

        if (safe)
        {
            //put 'shield' shader onto pawns affected
            int c = 0;
            foreach (Pawn p in friendPawns)
            {
                p.transform.position += new Vector3(pawnFriendPositions[c, 0], 0f, pawnFriendPositions[c, 1]);
                p.transform.GetChild(0).gameObject.SetActive(true);
                c++;
            }
        }
        else
        {
            //remove shield shader
            pawn.transform.GetChild(0).gameObject.SetActive(false);

            IEnumerable<Pawn> previousSpotPawns = playerPawns.Where(p => p.TeamId == pawn.TeamId && p.Position == previousPos);

            if (previousSpotPawns.Count() < 2)
                foreach (Pawn p in friendPawns)
                {
                    p.transform.GetChild(0).gameObject.SetActive(false);
                    p.transform.position = tiles[previousPos].transform.GetChild(0).position;
                }
        }
    }

    /// <summary>
    /// Updates the player roll value
    /// </summary>
    void UpdateRollVal()
    {
        //get roll team id
        var teamId = players.First(p => p.Id == playerTurn).TeamId;
        //get the transform where the text should be updated
        var trans = canvas.transform.GetChild(2).GetChild(players.Length > 2 ? teamId : teamId > 0 ? 2 : 0).GetChild(2);
        //enable the object
        trans.gameObject.SetActive(true);
        //set text value
        trans.GetComponent<TextMeshProUGUI>().SetText(rollVal.ToString());
    }

    /// <summary>
    /// Updates the player turn
    /// </summary>
    /// <param name="newTurn">whose turn it is going to be</param>
    void UpdateTurn(long newTurn)
    {
        //check if it's currently the first turn
        if (playerTurn == 0)
        {
            playerTurn = newTurn;
        }

        //get the player team
        int teamId = players.First(p => p.Id == playerTurn).TeamId;
        //get the player UI transform
        var trans = canvas.transform.GetChild(2);
        //set text
        trans.GetChild(teamId).GetChild(2).GetComponent<TextMeshProUGUI>().SetText("-");
        //change turns
        playerTurn = newTurn;

        //get team
        teamId = players.First(p => p.Id == newTurn).TeamId;
        //get player UI
        newTeamTrans = camPoints.transform.GetChild(teamId);
        //set UI text
        trans.GetChild(teamId).GetChild(2).GetComponent<TextMeshProUGUI>().SetText("#");

        //toggle camera movement to next player
        changingTurns = true;
    }
}

[Serializable]
public class GameMessage
{
    public GameMessage(string roomId, string action, string args)
    {
        RoomId = roomId;
        Action = action;
        Args = args;
    }

    public string RoomId;
    public string Action;
    public string Args;
}

[Serializable]
public class PlayerData
{
    public int PlayerId;
    public string Name;

    public PlayerData(int playerId, string name)
    {
        PlayerId = playerId;
        Name = name;
    }
}