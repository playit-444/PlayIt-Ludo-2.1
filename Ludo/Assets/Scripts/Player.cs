using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets.Scripts
{
    public class Player
    {
        public long Id { get; set; }
        public string Name { get; set; }
        public int TeamId { get; set; }

        public Player(long id, string name, int teamId)
        {
            Id = id;
            Name = name;
            TeamId = teamId;
        }
    }
}
