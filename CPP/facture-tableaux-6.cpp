#include <stdio.h>
#include <iostream>
#include <string>    /* corrig� n� 6, � compl�ter */

using namespace std;

void saisirLesInfos(string civilite, string nom,string prenom,string rue,string cpos,string ville)
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
/* traitement code postal et ville */

cout<<"code postal : ";
getline(cin, cpos);

cout<<"Ville : ";
getline(cin, ville);

system("PAUSE");
}

int calculprix(double prixpizza[], int quantitepizza[], double totalprix)
{ 
    // retourne le nombre de ligne dans la facture*/
int i;
string rep;
double prix;
int quantite;

rep="o";
totalprix=0;

i=0; // c'est la premiere pizza

while ((rep=="o") || (rep=="O"))
{
    printf ("Gestion de la facture \n");
  
	printf("prix de la pizza : ");
	cin>>prix;
	prixpizza[i]=prix;

	printf("quantite : ");
	cin>>quantite;
	quantitepizza[i]=quantite;

	totalprix=totalprix+prix*quantite;
	
    cout<<"une autre ligne, tapez 'o' pour oui "<<endl;
    cin>>rep;
    i=i+1;    // i++;
}

printf("total de la facture : ");
cout<<totalprix<<endl;

return i;
}

// deuxi�me d�claration
int calculprix(double prixpizza[], int quantitepizza[])
{ 
    // retourne le nombre de ligne dans la facture*/
/* lecture des lignes de la facture */
int i;
string rep;
double prix;
int quantite;
double totalprix;

rep="o";
totalprix=0;

i=0; // c'est le premiere pizza

while ((rep=="o") || (rep=="O"))
{
    printf ("Gestion de la facture \n");
  
	printf("prix de la pizza : ");
	cin>>prix;
	prixpizza[i]=prix;

	printf("quantite : ");
	cin>>quantite;
	quantitepizza[i]=quantite;

	totalprix=totalprix+prix*quantite;
	
    cout<<"une autre ligne, tapez 'o' pour oui "<<endl;
    cin>>rep;
    i=i+1;    // i++;
}

printf("total de la facture : ");
cout<<totalprix<<endl;

return i;
}

void afffacture(string civilite, string nom,string prenom,string rue,string cpos,string ville, double prixpizza[], int quantitepizza[], double totalprix, int nbreligne)
{                     
int j;                       

// pour afficher

cout<<"affichage d�finitif de la pizza"<<endl;
cout<<endl;
cout<<endl;
cout<<"pizza rabbit"<<endl;
cout<<endl;
cout<<"numero de commande: "<<"23"<<endl;
cout<<"Numero de client :"<<"234"<<endl;

cout<<"                                     "<<civilite<<" "<<nom<<" "<<prenom<<endl;
cout<<"                                     "<<rue<<endl;
cout<<"                                     "<<cpos<<" "<<ville<<endl;

cout<<endl;
cout<<"ligne de la commande "<<endl;

cout<<"      quantit�"<<"    "<<"r�f�rence"<<"    "<<"d�signation"<<"  prix    "<<"total"<<endl;

for (j=0;j<nbreligne;j++)
{
 cout <<"N. "<<j+1<<",  "<<quantitepizza[j]<<"           "<<" refe" <<j+1<<"    "<<"nompizz"<<j+1;
 cout <<"      "<<prixpizza[j]<<"    "<< quantitepizza[j]*prixpizza[j]<<endl;
}    
cout<<endl;
cout<<endl;
cout<<"                                                        total: "<<totalprix;
cout<<endl;
cout<<endl;
 
  system("PAUSE");  
}

int main()    // programme principal
{
	int i;  // sert � gerer le nombre de lignes dans la commande,
    int j; // permet l'affichage des lignes de la facture de la pizza  

	string civilite;
	string nom;
	string prenom;
	string rue = "4 rue des petits pieds";
	string cpos;
	string ville;
	string rep;
	double totalprix;
	int quantite;
	double prix;
    int quantitepizza[10];  
	string nompizza[10];
	double prixpizza[10];
	
	int nbreligne; /* nombre de ligne dans la commande */
	
/* d�but du programme */

saisirLesInfos(civilite,nom,prenom,rue,cpos,ville);

// on va calculer et sauvegarder le nombre de lignes
nbreligne=calculprix(prixpizza, quantitepizza, totalprix);   
 
// affichage de la facture
afffacture(civilite,nom,prenom,rue,cpos,ville,prixpizza, quantitepizza, totalprix, nbreligne);   
 
  system("PAUSE");  
}
