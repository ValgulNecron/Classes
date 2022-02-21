using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace consResto
{
    public class Menu
    {
        private int prixEntree, prixPlatPrincipal, prixDessert;
        private string nomMenu, nomEntree, nomPlatPrincipal, nomDessert; 

        public Menu()
        {
            // constructeur vide
            prixEntree= prixPlatPrincipal= prixDessert = 0;
            nomMenu = nomEntree = nomPlatPrincipal = nomDessert = "yannCharlier";
        }
        public Menu(string nomMe)
        {
            //constructeur avec seulement le menu
            prixEntree = prixPlatPrincipal = prixDessert = 0;
            nomEntree = nomPlatPrincipal = nomDessert = "yannCharlier";
            nomMenu = nomMe;
        }
        public Menu(string nomMe,string nomEn, string nomPP, string nomDe, int pxEn, int pxPP, int pxDe)
        {
            //construteur
            prixEntree = pxEn;
            prixDessert = pxDe;
            prixPlatPrincipal = pxPP;
            nomMenu = nomMe;
            nomEntree = nomEn;
            nomPlatPrincipal = nomPP;
            nomDessert = nomDe;
        }
        public void SetNomMenu(string nomMe)
        {
            nomMenu = nomMe;
        }
        public string GetNomMenu()
        {
            return nomMenu;
        }
        public void SetNomPlatPrincipal(string nomPP)
        {
            nomPlatPrincipal = nomPP;
        }
        public string GetNomPlatPrincipal()
        {
            return nomPlatPrincipal;
        }
        public void SetNomDessert(string nomDe)
        {
            nomDessert = nomDe;
        }
        public string GetNomDessert()
        {
            return nomDessert;
        }
        public void SetNomEntree(string nomEn)
        {
            nomEntree = nomEn;
        }
        public string GetNomEntree()
        {
            return nomEntree;
        }
        public void SetPrixEntree(int prixEn)
        {
            prixEntree = prixEn;
        }
        public void SetPrixDessert(int prixDe)
        {
            prixDessert = prixDe;
        }
        public void SetPrixPlatPrincipal(int prixPP)
        {
            prixPlatPrincipal = prixPP;
        }
        public void SetLesPrix(int prixEn, int prixPP, int prixDe)
        {
            prixEntree = prixEn;
            prixPlatPrincipal = prixPP;
            prixDessert = prixDe;
        }
        public void SetLesNom(string nomMe, string nomEn, string nomPP, string nomDe)
        {
            nomMenu = nomMe;
            nomEntree = nomEn;
            nomPlatPrincipal = nomPP;
            nomDessert = nomDe;
        }
        public void SetLesNom(string nomEn, string nomPP, string nomDe)
        {
            nomEntree = nomEn;
            nomPlatPrincipal = nomPP;
            nomDessert = nomDe;
        }
        public string PermertAffMenu()
        {
            return GetNomMenu() + " " + GetNomEntree() + " " + GetNomPlatPrincipal() + " " + GetNomDessert();
        }
        public int PrixMenu()
        {
            return prixEntree + prixPlatPrincipal + prixDessert;
        }
    }
}
