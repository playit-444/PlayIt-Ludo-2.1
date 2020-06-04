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

    public class Tile
    {
        [SerializeField]
        private int index;
        [SerializeField]
        private int type;

        public int Index { get; set; }
        public int Type { get; set; }

        public Tile() { }

        public Tile(int i, int t)
        {
            index = i;
            type = t;
        }
    }

    /// <summary>
    /// Tile type data
    /// </summary>
    public enum TileType
    {
        NONE = 0,
        STAR = 1,
        GLOBE = 2,
        GOAL_ENTRANCE = 4
    }

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

        for (int i = 0; i < 4; i++)
        {
            tiles[(i * 13) + 2].GetComponent<Tile>().Type = (int)(TileType.GLOBE);
            tiles[(i * 13) + 10].GetComponent<Tile>().Type = (int)(TileType.GLOBE);
        }

        SendMessageToJS(JsonUtility.ToJson(new GameMessage(string.Empty, "READY", null)));
    }

    [SerializeField]
    private float camMoveSpeed;

    private bool changingTurns = false;
    private int newTeam;

    Transform newTeamTrans;
    private void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            RaycastHit hit;
            Ray ray = mainCam.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                GameObject obj = hit.transform.gameObject;

                Pawn p = obj.GetComponent<Pawn>();
                if (p != null)
                {
                    SelectPawn(p);
                }
            }
        }

        if (Input.GetButtonUp("Fire1"))
            selectedPawn = null;



        if (changingTurns)
        {
            mainCam.transform.position = Vector3.Lerp(mainCam.transform.position, newTeamTrans.position, camMoveSpeed * Time.deltaTime);
            mainCam.transform.rotation = Quaternion.Lerp(mainCam.transform.rotation, newTeamTrans.rotation, camMoveSpeed * Time.deltaTime);

            if (Vector3.Distance(mainCam.transform.position, newTeamTrans.position) < 0.02f)
            {
                changingTurns = false;
            }
        }
    }

    void MovePawnToGoal(int idx)
    {
        Pawn pawn = playerPawns[idx];

        int availableSpot = 0;

        GameObject goal = tiles[72 + pawn.TeamId];
        for (int j = 0; j < 4; j++)
        {
            if (goal.transform.GetChild(j).childCount < 1)
            {
                availableSpot = j;
                Debug.Log("found goal spot");
                break;
            }
        }

        pawn.transform.position = goal.transform.GetChild(availableSpot).position;
        pawn.transform.SetParent(goal.transform.GetChild(availableSpot).transform);
        Debug.Log("moved pawn to goal success");
    }

    void MovePawnToHome(int idx)
    {
        Pawn pawn = playerPawns[idx];

        int availableSpot = 0;

        Transform home = homesObject.transform.GetChild(4 + pawn.TeamId);
        for (int j = 0; j < 4; j++)
        {
            if (home.GetChild(j).GetChild(0).childCount < 1)
            {
                availableSpot = j;
                Debug.Log("found home spot");
                break;
            }
        }

        pawn.transform.position = home.GetChild(availableSpot).GetChild(0).position;
        pawn.transform.SetParent(home.transform.GetChild(availableSpot).GetChild(0).transform);
        Debug.Log("moved pawn to home success");
    }

    [SerializeField]
    Canvas canvas;

    [SerializeField]
    Text text;

    void Initialize()
    {
        //set button to active
        canvas.transform.GetChild(0).gameObject.SetActive(true);

        for (int i = 0; i < players.Length; i++)
        {
            Transform home = homesObject.transform.GetChild(players[i].TeamId + 4);

            for (int j = 0; j < 4; j++)
            {
                GameObject pawn = Instantiate(pawnPrefab, home.GetChild(j).GetChild(0).position, Quaternion.identity);
                pawn.GetComponent<MeshRenderer>().material = teamColours[players[i].TeamId];
                Pawn p = pawn.GetComponent<Pawn>();
                p.Id = (i * 4) + j;
                p.Position = -1;
                p.Owner = players[i].Id;
                p.TeamId = i;

                playerPawns[p.Id] = p;
            }

            Debug.Log("creates pawns for player: " + players[i].Name);
        }
    }

    void SelectPawn(Pawn pawn)
    {
        selectedPawn = pawn;
        Debug.Log($"trying to select {selectedPawn.name}-{selectedPawn.Owner} with owner: {ownPlayer.Id}");
        if (selectedPawn != null &&
            selectedPawn.Owner == ownPlayer.Id &&
           playerTurn == ownPlayer.Id)
        {
            Debug.Log("selected " + selectedPawn.name);
            var json = new GameMessage(roomId, "MOVE", selectedPawn.Id.ToString());
            SendMessageToJS(JsonUtility.ToJson(json));
        }
    }

    public void Roll()
    {
        if (playerTurn == ownPlayer.Id)
        {
            var json = new GameMessage(roomId, "ROLL", null);

            SendMessageToJS(JsonUtility.ToJson(json));
        }
    }

    public void SendMessageToJS(string msg)
    {
        text.text = "TRY U3D: " + msg;
        HandleUnityMessage(msg);
        text.text = "U3D: " + msg;
    }

    public void HandleMessageFromJS(string message)
    {
        text.text = "JS: " + message;

        GameMessage msg = JsonUtility.FromJson<GameMessage>(message);
        Debug.Log($"{msg.RoomId}-{msg.Action}->{msg.Args}");

        switch (msg.Action)
        {
            case "INIT":

                roomId = msg.RoomId;
                string[] args = msg.Args.Split('\n');

                players = new Player[args.Length - 1];

                long.TryParse(args[0], NumberStyles.Integer, CultureInfo.InvariantCulture, out long id);

                for (int i = 0; i < args.Length - 1; i++)
                {
                    string[] obj = args[i + 1].Split('|');
                    try
                    {
                        if (args.Length > 3)
                            players[i] = new Player(long.Parse(obj[0], NumberStyles.Integer, CultureInfo.InvariantCulture), obj[1], i);
                        else
                            players[i] = new Player(long.Parse(obj[0], NumberStyles.Integer, CultureInfo.InvariantCulture), obj[1], (i) * 2);

                        Debug.Log(players[i].Id + "|" + players[i].Name);

                        string textVal = players[i].Name;

                        var trans = canvas.transform.GetChild(2).GetChild(i);
                        trans.gameObject.SetActive(true);
                        trans.GetChild(1).gameObject.SetActive(true);
                        trans.GetChild(1).GetComponent<TextMeshProUGUI>().SetText(players[i].Name);

                        Debug.Log("created player hud");

                        if (players[i].Id == id)
                        {
                            ownPlayer = players[i];
                        }
                        /*
                        Color c = teamColours[players[i].TeamId].color;
                        trans.GetComponent<TextMeshProUGUI>().color = c;
                        trans.parent.GetChild(2).GetComponent<TextMeshProUGUI>().color = c;
                        */
                        Debug.Log("created player");
                    }
                    catch (Exception)
                    {
                        throw;
                    }

                    if (players.Length > 2)
                    {
                        camPoints.GetChild(2).SetSiblingIndex(1);
                    }
                }

                Initialize();
                break;
            case "ROLL":
                rollVal = int.Parse(msg.Args);

                UpdateRollVal();
                break;
            case "NEXTTURN":
                UpdateTurn(long.Parse(msg.Args));
                break;
            case "MOVE":
                string[] a = msg.Args.Split('|');
                if (int.Parse(a[1]) == -2)
                    break;
                Debug.Log($"{a[0]} moved to pos {a[1]}");
                MovePawn(int.Parse(a[0]), int.Parse(a[1]));
                Debug.Log("pawn moved!");
                break;
            case "GOAL":
                Debug.Log("moved pawn(" + int.Parse(msg.Args) + ") to spawn");
                MovePawnToGoal(int.Parse(msg.Args));
                break;
            default:
                break;
        }
    }

    readonly float[,] pawnFriendPositions =
        new float[,] {
            { 0.15f, 0.15f },
            { 0.15f, -0.15f},
            { -0.15f, -0.15f},
            { -0.15f, 0.15f}
        };
    void MovePawn(int pId, int pos)
    {
        Pawn pawn = playerPawns[pId];
        int previousPos = pawn.Position;

        if (pos == -1)
        {
            pawn.Position = pos;
            pawn.transform.GetChild(0).gameObject.SetActive(false);
            MovePawnToHome(pId);
            return;
        }

        pawn.transform.GetChild(0).gameObject.SetActive(false);
        int res = pos == -1 ? 0 : (pos - pawn.Position);
        pawn.transform.position = tiles[pos].transform.GetChild(0).position;

        pawn.Position = pos;

        IEnumerable<Pawn> friendPawns = playerPawns.Where(p => p.TeamId == pawn.TeamId && p.Position == pawn.Position);

        var safe = (tiles[pawn.Position].GetComponent<Tile>().Type & (int)TileType.GLOBE) > 0 || friendPawns.Count() > 1;
        Debug.Log("pawn " + pawn.Id + " should be safe? " + safe);
        if (safe)
        {
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

    void UpdateRollVal()
    {
        var trans = canvas.transform.GetChild(2).GetChild(players.First(p => p.Id == playerTurn).TeamId).GetChild(2);
        trans.gameObject.SetActive(true);
        trans.GetComponent<TextMeshProUGUI>().SetText(rollVal.ToString());
    }

    bool firstTurn = true;
    void UpdateTurn(long newTurn)
    {
        if (playerTurn == 0)
        {
            playerTurn = newTurn;
        }

        if (!firstTurn)
        {
            int teamId = players.First(p => p.Id == playerTurn).TeamId;
            var trans = canvas.transform.GetChild(2).GetChild(teamId).GetChild(2);
            trans.GetComponent<TextMeshProUGUI>().SetText("-");
            playerTurn = newTurn;

            changingTurns = true;


            teamId++;
            if (teamId == players.Length)
                newTeam = 0;
            else
                newTeam = teamId;

            newTeamTrans = camPoints.transform.GetChild(newTeam);

            trans = canvas.transform.GetChild(2).GetChild(newTeam).GetChild(2);
            trans.gameObject.SetActive(true);
            trans.GetComponent<TextMeshProUGUI>().SetText("#");
        }
        else
        {
            firstTurn = false;

            int teamId = players.First(p => p.Id == playerTurn).TeamId;
            var trans = canvas.transform.GetChild(2).GetChild(teamId).GetChild(2);
            trans.GetComponent<TextMeshProUGUI>().SetText("-");
            playerTurn = newTurn;

            changingTurns = true;

            if (teamId == players.Length)
                newTeam = 0;
            else
                newTeam = teamId;

            newTeamTrans = camPoints.transform.GetChild(newTeam);

            trans = canvas.transform.GetChild(2).GetChild(newTeam).GetChild(2);
            trans.gameObject.SetActive(true);
            trans.GetComponent<TextMeshProUGUI>().SetText("#");
        }
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