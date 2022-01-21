#include <stdio.h>
#include <iostream>     /* corrigé n° 8 */
#include <string>
using namespace std;

string nompizza[10];

void saisirLesPizzas()
{
  nompizza[0]="Chorizo";
  nompizza[1]="Fruits de mer";
  nompizza[2]="Tartiflette";
  nompizza[3]="3 fromages";
  nompizza[4]="Kebab";
  nompizza[5]="Campagnarde";
  nompizza[6]="Végétarienne";
  nompizza[7]="Norvégienne";
  nompizza[8]="Margarita";  
  nompizza[9]="Calzone";
}    

void afficherlesPizzas()
{
	int i;

     cout<<"les pizzas de la pizzéria"<<endl;
     for (i=0;i<10;i++)
     	cout<<nompizza[i]<<endl;
}

void saisirLesInfos(string &civilite, string &nom,string &prenom,string &rue,string &cpos,string &ville)
{
cout<<"Entrez les coordonnees de la personne: \n";

cout<<"civilite : ";
getline(cin, civilite);

cout<<"nom : ";
getline(cin, nom);

cout<<"prenom : ";
getline(cin, prenom);

cout<<"rue : ";
getline(cin, rue);

cout<<"code postal : ";
getline(cin, cpos);

cout<<"Ville : ";
getline(cin, ville);

system("PAUSE");
}

int calculprix(double prixpizza[], int quantitepizza[], double &totalprix)
{ 
    // retourne le nombre de ligne dans la facture*/

int i;
string rep;
double prix;
int quantite;
//rep="o";  
printf ("Gestion de la facture \n");

totalprix=0;

printf("quantite : (tapez 0 pour arrêter)\n");
cin>>quantite;

i=0; // c'est la premiere pizza

while (quantite>0)
{
    quantitepizza[i]=quantite;  
  
	printf("prix de la pizza : ");
	cin>>prix;
	prixpizza[i]=prix;

	totalprix=totalprix+prix*quantite;
	
    printf("quantite : (tapez 0 pour arrêter)\n");
    cin>>quantite;
    
    i=i+1;    // i++;
}

printf("total de la facture : ");
cout<<totalprix<<endl;

return i;
}

void afffacture(string civilite, string nom,string prenom,string rue,string cpos,string ville, double prixpizza[], int quantitepizza[], double totalprix, int nbreligne)
{     // pour afficher
                       
int j;                       

cout<<"affichage définitif de la pizza"<<endl;
cout<<endl<<endl;
cout<<"pizza rabbit"<<endl;
cout<<endl;
cout<<"numero de commande: "<<"23"<<endl;
cout<<"Numero de client :"<<"234"<<endl;

cout<<"                                     "<<civilite<<" "<<nom<<" "<<prenom<<endl;
cout<<"                                     "<<rue<<endl;
cout<<"                                     "<<cpos<<" "<<ville<<endl;

cout<<endl;
cout<<"ligne de la commande "<<endl;

cout<<"      quantité"<<"    "<<"référence"<<"    "<<"désignation"<<"  prix    "<<"total"<<endl;

for (j=0;j<nbreligne;j++)
{
 cout <<"N. "<<j+1<<",  "<<quantitepizza[j]<<"           "<<" refe" <<j+1<<"    "<<"nompizz"<<j+1;
 cout <<"      "<<prixpizza[j]<<"    "<< quantitepizza[j]*prixpizza[j]<<endl;
}    
cout<<endl<<endl;
cout<<"                                                        total: "<<totalprix;
cout<<endl<<endl;
 
  system("PAUSE");  
}

int main()     // programme principal
{
	int i;  // sert à gerer le nombre de lignes dans la commande,
    int j; // permet l'affichage des lignes de la facture de la pizza  

	string civilite;
	string nom;
	string prenom;
	string rue = "4 rue des petits pieds";
	string cpos;
	string ville;
	string rep;
	
	int quantite;
	double prix;
    int quantitepizza[10];  	
	double prixpizza[10];
	double totalprix;
	
	int nbreligne; /* nombre de ligne dans la commande */

/* début du programme */

saisirLesPizzas();

afficherlesPizzas();

/* traitement du client */

saisirLesInfos(civilite,nom,prenom,rue,cpos,ville);

// on va calculer et sauvegarder le nombre de lignes
nbreligne=calculprix(prixpizza, quantitepizza, totalprix);  
 
// affichage de la facture

afffacture(civilite,nom,prenom,rue,cpos,ville,prixpizza, quantitepizza, totalprix, nbreligne);   
 
  system("PAUSE");  
}
