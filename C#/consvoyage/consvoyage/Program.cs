using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace voyage
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] TabDestination = new string[7];
            string[] TabAgence = new string[4];
            TabDestination[0] = "Grèce";
            TabDestination[1] = "Italie";
            TabDestination[2] = "Crête";
            TabDestination[3] = "Rhodes";
            TabDestination[4] = "Turquie";
            TabDestination[5] = "Egypte";
            TabDestination[6] = "Canarie";

            TabAgence[0] = "Nlle Frontière";
            TabAgence[1] = "FRAM";
            TabAgence[2] = "Rev'Evasion";
            TabAgence[3] = "Starter";



            voyage UnVoyage = new voyage(TabDestination, TabAgence);


            string[] TabDestination2 = new string[7];
            string[] TabAgence2 = new string[4];
            TabDestination2[0] = "australie";
            TabDestination2[1] = "USA";
            TabDestination2[2] = "belgique";
            TabDestination2[3] = "hongrie";
            TabDestination2[4] = "japon";
            TabDestination2[5] = "russie";
            TabDestination2[6] = "france";

            TabAgence2[0] = "xNlle Frontière";
            TabAgence2[1] = "xFRAM";
            TabAgence2[2] = "xRev'Evasion";
            TabAgence2[3] = "xStarter";


            voyage.voyage UnVoyage2 = new voyage.voyage(TabDestination2, TabAgence2);
//            UnVoyage.MajAgence();
//            UnVoyage.MajDestination();
            UnVoyage.AffichageAgence();
            UnVoyage.AffichageDestination();
            UnVoyage.SaisirPrix();
            UnVoyage.AffichePrix();
            UnVoyage.AfficherPrixPlusHaut();
            UnVoyage.afficherprixplusbas();
            Console.ReadKey();
//            UnVoyage2.MajAgence();
//            UnVoyage2.MajDestination();
            UnVoyage2.AffichageAgence();
            UnVoyage2.AffichageDestination();
            UnVoyage2.SaisirPrix();
            UnVoyage2.AffichePrix();
            UnVoyage2.AfficherPrixPlusHaut();
            UnVoyage2.afficherprixplusbas();
            Console.ReadKey();
        }
    }
}
