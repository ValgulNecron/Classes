using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace voyage
{
    public class voyage
    {
        public voyage(string[] TabDestination, string[] TabAgence)
        {
            this.TabDestination = TabDestination;
            this.TabAgence = TabAgence;
        }
        private string[] TabDestination = new string[7];
        private string[] TabAgence = new string[4];
        private int[,] TabPrix = new int[4, 7];
        public void MajDestination()
        {
            TabDestination[0] = "Grèce";
            TabDestination[1] = "Italie";
            TabDestination[2] = "Crête";
            TabDestination[3] = "Rhodes";
            TabDestination[4] = "Turquie";
            TabDestination[5] = "Egypte";
            TabDestination[6] = "Canarie";
        }
        public void MajAgence()
        {
            TabAgence[0] = "Nlle Frontière";
            TabAgence[1] = "FRAM";
            TabAgence[2] = "Rev'Evasion";
            TabAgence[3] = "Starter";
        }
        public void AffichageAgence()
        {
            for (int i = 0; i < 4; i++)
            {
                Console.WriteLine(TabAgence[i]);
            }
        }
        public void AffichageDestination()
        {
            Console.Write("                      ");
            for (int i = 0; i < 7; i++)
            {
                Console.Write(TabDestination[i] + "   |   ");
            }
            Console.WriteLine();
        }
        public void SaisirPrix()
        {
            Random rnd = new Random();
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    TabPrix[i, j] = rnd.Next(100, 1500);
                }
            }
        }
        public void AffichePrix()
        {
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    Console.Write(TabPrix[i, j] + "   |   ");
                }
                Console.WriteLine();
            }
        }
        public void AfficherPrixPlusHaut()
        {
            int prixplushaut = 0;
            int ib=0;
            int jb=0;
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    if (prixplushaut < TabPrix[i, j])
                    {
                        prixplushaut = TabPrix[i, j];
                        ib = i;
                        jb = j;
                    }
                }
            }
            Console.WriteLine(TabPrix[ib, jb]);
        }
        public void afficherprixplusbas()
        {
            int prixTOTAL = 0; int ib=0;
            int prixleplusbas = 99999;
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 7; j++)
                {
                    prixTOTAL = TabPrix[i, j] + prixTOTAL;
                }
                if (prixleplusbas > prixTOTAL)
                {
                    prixleplusbas = prixTOTAL;
                    ib = i;
                }
                prixTOTAL = 0;
            }
            Console.WriteLine(TabAgence[ib]);
        }
    }
}
