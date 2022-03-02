using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace consResto
{
    public class Client
    {
        private string adresseClient, prenomClient, nomClient;
        private int numeroClient;
        private Menu mnu;
        // private Menu[] mnuTab= new Menu[10];
        private int nbreMenu;
        private List<Menu> mnuTab = new List<Menu>();
        public Client()
        {
            numeroClient = -1;
            adresseClient = prenomClient = nomClient = "  ";
        }
        public Client(int numCli)
        {
            adresseClient = prenomClient = nomClient = "  ";
            numeroClient = numCli;
        }
        public Client(int numCli, string nomCli, string prenomCli)
        {
            adresseClient = "    ";
            nomClient = nomCli;
            numeroClient = numCli;
            prenomClient = prenomCli;
        }
        public int GetNumeroClient()
        {
            return numeroClient;
        }
        public void SetNumeroClient(int numCli)
        {
            numeroClient = numCli;
        }
        public string GetNomClient()
        {
            return nomClient;
        }
        public void SetNomClient(string nomCli)
        {
            nomClient = nomCli;
        }
        public string GetPrenomClient()
        {
            return prenomClient;
        }
        public void SetPrenomClient(string prenomCli)
        {
            prenomClient = prenomCli;
        }
        public string GetAdresseClient()
        {
            return adresseClient;
        }
        public void SetAdresseClient(string adresseCli)
        {
            adresseClient = adresseCli;
        }
        public void Mange(Menu unMenu)
        {
            mnu = unMenu;
        }
        public Menu GetMange()
        {
            return mnu;
        }
        public void rajouteMenu(Menu menu)
        {
            /*mnuTab[nbreMenu] = menu;
            nbreMenu += 1;*/
            mnuTab.Add(menu);
        }
        public int Addition()
        {
            int addition = 0;
            /*for (int i = 0; i < nbreMenu; i++)
            {
                addition += mnuTab[i].PrixMenu();
            }*/
            foreach (Menu item in mnuTab)
            {
                addition += item.PrixMenu();
            }
            return addition;
        }
        public double Addition(double reduc)
        {
            double addition = 0;
            Addition();
            addition = addition - addition / 100 * reduc;
            return addition;
        }
    }
}
