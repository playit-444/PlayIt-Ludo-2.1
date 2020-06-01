using Assets.Scripts;
using System.Collections.Generic;
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
            tiles[GetHomeEntranceIndex(i)].GetComponent<MeshRenderer>().material = teamColours[i];

            //assign goal tile colour
            for (int j = 0; j < 5; j++)
            {
                goalRoadTiles[(i * 5) + j].GetComponent<MeshRenderer>().material = teamColours[i];
            }
        }
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
            SendMessageToJS("MOVE|" + selectedPawn.Id);
        //}
    }

    public void Roll()
    {
        Debug.Log("im here");

        //if (playerTurn == ownPlayer.Id)
        //{
            SendMessageToJS("ROLL");
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
