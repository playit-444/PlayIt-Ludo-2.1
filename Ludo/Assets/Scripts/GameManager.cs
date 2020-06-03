using Assets.Scripts;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Runtime.InteropServices;
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
    private IDictionary<long, int> playerHomeEntrances;
    [SerializeField]
    private IDictionary<long, int> playerGoalEntrances;
    [SerializeField]
    private GameObject[] tiles;
    /*[SerializeField]
    private GameObject[] goalRoadTiles;*/
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
    private float[] camAngles;

    private Pawn selectedPawn = null;
    private long playerTurn = 0;

    void Start()
    {
        //WebGLInput.captureAllKeyboardInput = false;

        canvas.transform.GetChild(0).gameObject.SetActive(false);

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
                tiles[52 + j + (i * 6)].GetComponent<MeshRenderer>().material = teamColours[i];
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
                    SelectPawn(p);
                }
            }
        }

        if (Input.GetButtonUp("Fire1"))
            selectedPawn = null;
    }

    void MovePawnToGoal(int idx)
    {
        Pawn pawn = playerPawns[idx];

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

                        Transform playerHUD = canvas.transform.GetChild(2);
                        TextMesh t = playerHUD.GetChild(i).GetChild(1).gameObject.GetComponent<TextMesh>();
                        t.gameObject.SetActive(true);
                        t.text = players[i].Name;

                        if (players[i].Id == id)
                        {
                            ownPlayer = players[i];
                            t.color = teamColours[players[i].TeamId].color;
                        }
                        else
                        {
                            t.color = Color.black;
                        }

                        Debug.Log("created player");
                    }
                    catch (Exception)
                    {
                        throw;
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

    void MovePawn(int pId, int pos)
    {
        Pawn pawn = playerPawns[pId];
        pawn.transform.GetChild(0).gameObject.SetActive(false);
        int res = pos == -1 ? 0 : (pos - pawn.Position);
        StartCoroutine(MoveOverTime(new MoveParams(pawn.transform, pawn.transform.position, tiles[pos].transform.GetChild(0).position, pieceMoveSpeed * (pos - playerPawns[pId].Position))));
        pawn.transform.position =
            Vector3.Lerp(
                pawn.transform.position,
                tiles[pos].transform.GetChild(0).position,
                pieceMoveSpeed * res > 0 ? res : -res);

        pawn.Position = pos;
    }

    void UpdateRollVal()
    {
        var trans = canvas.transform.GetChild(2).GetChild(players.First(p => p.Id == playerTurn).TeamId).GetChild(2);
        trans.GetComponent<TextMesh>().text = "Roll: " + rollVal.ToString();
        trans.gameObject.SetActive(true);
        //canvas.transform.GetChild(3).gameObject.GetComponent<Text>().text = "Roll: " + rollVal.ToString();
    }

    void UpdateTurn(long newTurn)
    {
        canvas.transform.GetChild(2).GetChild(players.First(p => p.Id == playerTurn).TeamId).GetChild(2).gameObject.SetActive(false);
        playerTurn = newTurn;
    }

    private class MoveParams
    {
        public Transform trans;
        public Vector3 from;
        public Vector3 to;
        public float time;

        public MoveParams(Transform trans, Vector3 from, Vector3 to, float time)
        {
            this.trans = trans;
            this.from = from;
            this.to = to;
            this.time = time;
        }
    }

    IEnumerator MoveOverTime(MoveParams param)
    {
        if (param.time > 0f)
        {
            float startTime = Time.time;
            float endTime = Time.time + param.time;
            transform.position = param.from;
            WaitForSeconds delay = new WaitForSeconds(0.05f);
            while (Time.time < endTime)
            {

                transform.position = Vector3.Lerp(param.from, param.to, ((Time.time - startTime) * pieceMoveSpeed) / (Vector3.Distance(param.to, param.from)));
                yield return delay;
            }
        }

        yield return null;
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