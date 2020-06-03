using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pawn : MonoBehaviour
{
    [SerializeField]
    private int id;
    [SerializeField]
    private int position;
    [SerializeField]
    private long owner;
    [SerializeField]
    private bool onGoalTile;
    [SerializeField]
    private int teamId;

    public int Id { get => id; set => id = value; }
    public int Position { get => position; set => position = value; }
    public long Owner { get => owner; set => owner = value; }
    public bool OnGoalTile { get => onGoalTile; set => onGoalTile = value; }
    public int TeamId { get => teamId; set => teamId = value; }

    public Pawn(int id, int position, long owner, int teamId)
    {
        this.id = id;
        this.position = position;
        this.owner = owner;
        this.onGoalTile = false;
        this.teamId = teamId;
    }
}
