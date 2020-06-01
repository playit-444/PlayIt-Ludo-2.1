using Assets.Scripts;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{

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
    private IDictionary<long, int> playerHomeEntrances;
    [SerializeField]
    private IDictionary<long, int> playerGoalEntrances;
    [SerializeField]
    private GameObject[] tiles;
    [SerializeField]
    private GameObject[] goalRoadTiles;
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

    private Pawn selectedPawn;
    private long playerTurn;

    public Player[] Players { get; set; }

    void Start()
    {


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
            tiles[GetHomeEntranceIndex(i)].GetComponent<MeshRenderer>().material = teamColours[i];

            //assign goal tile colour
            for (int j = 0; j < 5; j++)
            {
                goalRoadTiles[(i * 5) + j].GetComponent<MeshRenderer>().material = teamColours[i];
            }
        }

        SendMessageToJS(JsonUtility.ToJson(new GameMessage(string.Empty, "READY", null)));
    }

    private void Update()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            Debug.Log("fired!");

            RaycastHit hit;
            Ray ray = mainCam.ScreenPointToRay(Input.mousePosition);

            if (Physics.Raycast(ray, out hit))
            {
                GameObject obj = hit.transform.gameObject;

                Pawn p = obj.GetComponent<Pawn>();
                if (p != null)
                {
                    Debug.Log("selected " + p.name);
                    selectedPawn = p;
                    SelectPawn();
                }
            }
        }

        if (Input.GetButtonUp("Fire1"))
            selectedPawn = null;
    }

    void MovePawn(int idx, int moves)
    {
        Pawn pawn = playerPawns[idx];
        int movesLeft = moves;
        long ownerGoalIndex = playerGoalEntrances[pawn.Owner];

        int diff = tiles.Length - pawn.Position;

        do
        {
            for (int i = pawn.Position; i < tiles.Length; i++)
            {
                //if on the goal path
                if (pawn.OnGoalTile && pawn.Position != 6)
                {
                    int atGoal = (pawn.Position + movesLeft);
                    if (atGoal > 5)
                        atGoal = (5 - (atGoal - 5));

                    if (atGoal == 0)
                    {
                        MovePawnToGoal(idx);
                        GameObject newTile1 = null;
                        for (int k = 0; k < 4; k++)
                        {
                            if (k == pawn.TeamId)
                            {
                                newTile1 = goals[pawn.TeamId];
                                break;
                            }
                        }

                        if (newTile1 == null)
                            Debug.Log("oh no");

                        int availableSpot = 0;

                        for (int j = 0; j < newTile1.transform.childCount; j++)
                        {
                            if (!newTile1.transform.GetChild(j).GetChild(0))
                            {
                                availableSpot = j;
                                break;
                            }
                        }

                        pawn.Position = 6;
                        pawn.transform.position =
                            Vector3.Lerp(
                                pawn.transform.position,
                                newTile1.transform.GetChild(availableSpot).position,
                                pieceMoveSpeed * movesLeft);
                        movesLeft = 0;
                        break;
                    }
                    else if (atGoal < 5)
                    {
                        pawn.Position = atGoal;
                        pawn.transform.position =
                            Vector3.Lerp(
                                pawn.transform.position,
                                goalRoadTiles[(pawn.TeamId * 4) + atGoal].transform.position,
                                pieceMoveSpeed * movesLeft);
                    }

                    //move brick
                    break;
                }

                //if goal entrance is being hit
                if (i == ownerGoalIndex && movesLeft > 0)
                {
                    if (movesLeft == 6)
                    {
                        MovePawnToGoal(idx);
                    }
                    else
                    {
                        GameObject newTile2 = goalRoadTiles[(pawn.TeamId * 4) + movesLeft];
                        pawn.Position = newTile2.GetComponent<Tile>().Index;
                        pawn.transform.position = Vector3.Lerp(pawn.transform.position, newTile2.transform.position, pieceMoveSpeed * movesLeft);
                    }

                    movesLeft = 0;
                    break;
                }

                //standard move
                GameObject newTile = tiles[pawn.Position + 1];
                pawn.transform.position = Vector3.Lerp(pawn.transform.position, newTile.transform.position, pieceMoveSpeed);
                pawn.Position++;

                movesLeft--;
            }

            //if the pawn is on the last tile of the 
            if (pawn.Position == tiles.Length - 1)
            {
                pawn.Position = 0;
                GameObject newTile = tiles[0];
                pawn.transform.position = Vector3.Lerp(pawn.transform.position, newTile.transform.position, pieceMoveSpeed);

                movesLeft--;
            }

        } while (movesLeft > 0);

        if (pawn.OnGoalTile)
            return;

        IEnumerable<Pawn> enemyPawns =
            playerPawns.Where(
                p => p.TeamId != pawn.TeamId &&
                p.Position == pawn.Position);

        if (enemyPawns.Count() > 0)
        {
            if (enemyPawns.Count() > 2 || (tiles[pawn.Position].GetComponent<Tile>().Type & (int)TileType.GLOBE) > 0)
                MovePawnToHome(pawn.Id);
            else
                MovePawnToHome(enemyPawns.First().Id);

            return;
        }

        IEnumerable<Pawn> teamPawns =
            playerPawns.Where(
                p => p.TeamId == pawn.TeamId &&
                p.Position == pawn.Position);

        if (teamPawns.Count() > 0 || (tiles[pawn.Position].GetComponent<Tile>().Type & (int)TileType.GLOBE) > 0)
        {
            pawn.transform.GetChild(0).gameObject.SetActive(true);

            return;
        }

        pawn.transform.GetChild(0).gameObject.SetActive(false);
    }

    void MovePawnToHome(int idx)
    {
        Pawn pawn = playerPawns[idx];

        pawn.Position = -1;

        Transform obj = homesObject.transform.GetChild(pawn.TeamId);
        Transform newPos = null;
        for (int i = 0; i < obj.childCount; i++)
        {
            if (obj.GetChild(i).GetChild(0).childCount == 1)
            {
                newPos = obj.GetChild(i).GetChild(0).GetChild(0);
            }
        }

        if (newPos == null)
            return;

        //TODO: explosion

        Vector3.Lerp(pawn.transform.position, newPos.position, pieceMoveSpeed * 4);
        pawn.transform.SetParent(newPos);
    }

    void MovePawnToGoal(int idx)
    {
        Pawn pawn = playerPawns[idx];
        pawn.Position = 6;

        int availableSpot = 0;

        GameObject goal = goals[pawn.TeamId];
        for (int j = 0; j < goal.transform.childCount; j++)
        {
            if (!goal.transform.GetChild(j).GetChild(0))
            {
                availableSpot = j;
                break;
            }
        }

        pawn.Position = 6;
        pawn.transform.position =
            Vector3.Lerp(
                pawn.transform.position,
                goal.transform.GetChild(availableSpot).position,
                pieceMoveSpeed);
        pawn.transform.SetParent(goal.transform.GetChild(availableSpot).transform);
    }

    [SerializeField]
    Canvas canvas;

    [SerializeField]
    Text text;

    void Initialize()
    {
        WebGLInput.captureAllKeyboardInput = false;

        canvas.enabled = true;

        for (int i = 0; i < players.Length; i++)
        {
            GameObject home = homesObject.transform.GetChild(players[i].TeamId).gameObject;

            for (int j = 0; j < 4; j++)
            {
                GameObject pawn = Instantiate(pawnPrefab, home.transform.GetChild(j).GetChild(0).position, Quaternion.identity);
                pawn.GetComponent<MeshRenderer>().material = teamColours[players[i].TeamId];
                Pawn p = pawn.AddComponent<Pawn>();
                p.Id = (i * 4) + j;
                p.Position = -1;
                p.Owner = players[i].Id;
                p.TeamId = i;
            }
        }
    }

    void SelectPawn()
    {
        //if (selectedPawn != null &&
        //    ownPlayer != null &&
        //    selectedPawn.Owner == ownPlayer.Id &&
        //    playerTurn == ownPlayer.Id)
        //{
        var json = new GameMessage(string.Empty, "MOVE", selectedPawn.Id);
        SendMessageToJS(JsonUtility.ToJson(json));
        //}
    }

    public void Roll()
    {
        //if (playerTurn == ownPlayer.Id)
        //{
        var json = new GameMessage(string.Empty, "ROLL", null);
        SendMessageToJS(JsonUtility.ToJson(json));
        //}
    }

    int GetHomeEntranceIndex(int teamId) => (teamId * 13) + 2;
    int GetGoalEntranceIndex(int teamId) => teamId * 13;

    public void SendMessageToJS(string msg)
    {
        HandleUnityMessage(msg);
        text.text = "U3D: " + msg;
    }

    public void HandleMessageFromJS(string message)
    {
        text.text = "JS: " + message;
    }
}

public class GameMessage
{
    public GameMessage(string roomId, string action, params object[] args)
    {
        RoomId = roomId;
        Action = action;
        Args = args;
    }

    public string RoomId { get; set; }
    public string Action { get; set; }
    public object[] Args { get; set; }
}