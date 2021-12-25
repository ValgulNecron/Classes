#include <stdio.h>
#include <iostream>
#include <string>

/* corrigé n° 9 avec ingrédients */

using namespace std;

string nompizza[10];
string nomIngredient[30];

string tabNomPizzaIngredients[10][5]; //les 10 pizzas avec chacune 5 ingrédients maxi

int tabQIngredient[30];  // les quantités (en kilo) pour chaque engrédient
                         // si une quantité est à zéro, il n'y en a plus 
                         // A UTILISER POUR LES PROCHAINES QUESTIONS

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

void affichePizza()
{
int i;
 
     cout<<"les pizzas de la pizzéria"<<endl;    
     for (i=0;i<10;i++)
     cout<<nompizza[i]<<endl;
}
void saisirLesIngredients()
{
  int i;
     
  nomIngredient[0]="Poivrons";
  nomIngredient[1]="Ail";
  nomIngredient[2]="Anchois";
  nomIngredient[3]="Tomates";
  nomIngredient[4]="cabillaud";
  nomIngredient[5]="Crevettes";
  nomIngredient[6]="Gruyere";
  nomIngredient[7]="Champignons";
  nomIngredient[8]="Oignons";  
  nomIngredient[9]="Lardons";
  nomIngredient[10]="ananas";

  //
  // puis mettre x dans le reste des ingrédients de 10 à 29
  for (i=11;i<30;i++)
     nomIngredient[i]="X";
  
}              

void afficheIngredients()
{
int i;
 
     cout<<endl<<"les ingrédients de la pizzéria"<<endl;    
     for (i=0;i<30;i++)
     cout<<nomIngredient[i]<<endl;
     
     
}
void saisirLesIngredientsPizzas()
{
     int i;
     int j;
     
      // on peut aussi mettre des X partout 
      for (i=0;i<10;i++)
        {
          for (j=0;j<5;j++)
              {                
                tabNomPizzaIngredients[i][j] ="X";
              }
        }     
     // puis mettre les vrais valeurs, pour quelques pizzas
     tabNomPizzaIngredients[0][0] = "tomate";
     tabNomPizzaIngredients[0][1] = "chorizo";
     tabNomPizzaIngredients[0][2] = "ananas";
     tabNomPizzaIngredients[5][4] = "patate";
     //
     tabNomPizzaIngredients[6][3] = "chorizo";
     tabNomPizzaIngredients[8][1] = "chorizo";
     tabNomPizzaIngredients[8][2] = "Anchois";

     //
      
}  

void afficheLesIngredientsPizzas()
{
int i,j;
 
     cout<<endl<<"les pizzas avec les ingrédients"<<endl;    
    
     for (i=0;i<10;i++)
        {
          cout<<endl<<"c'est la pizza: "<<nompizza[i]<<" avec les ingrédients: "<<endl;             
          for (j=0;j<5;j++)
              {                
                cout<<tabNomPizzaIngredients[i][j]<<endl;
              }
        }      
     
}   
void afficheChorizoPizzas()
{
int i,j;
 
     cout<<endl<<"les pizzas avec du chorizo"<<endl;    
    
     for (i=0;i<10;i++)
        {
             for (j=0;j<5;j++)
              {                
                if (tabNomPizzaIngredients[i][j]=="chorizo")
                      cout<<endl<<"c'est la pizza: "<<nompizza[i]<<" qui contient du "<<tabNomPizzaIngredients[i][j]<<endl; 
              }
        }      
     
}   



void affichePizzaAvecLIngrediant(string ingrediant)
{
int i,j;
 
     cout<<endl<<"les pizzas avec du "<<ingrediant<<endl;    
    
     for (i=0;i<10;i++)
        {
             for (j=0;j<5;j++)
              {                
                if (tabNomPizzaIngredients[i][j]==ingrediant)
                      cout<<endl<<"c'est la pizza: "<<nompizza[i]<<" qui contient du "<<tabNomPizzaIngredients[i][j]<<endl; 
              }
        }      
     
} 

int ouPizza(string nomPizzaParam)   // c'est une fonction
    {
                   // fonction qui controle si la pizza existe
				   // une solution possible
      int i = 0;
      bool btrouve = false; 
      
      while ((i<10) and (btrouve==false))
            {
             if (nompizza[i] == nomPizzaParam)
                 {
                  btrouve=true;
                  }
             else
                {
                 i++;  // élément suivant
                 } 
            }
  if (btrouve==true)
      return (i);
  else
      return (-1);                                                                              
                   
}               
     
// Ecrire la fonction , int ouIngredient(string nomIngredient)
// fonction qui contrôle si l'ingredient existe
// Ensuite, utiliser le tableau tabQIngredient[30] pour voir si l'ingtrédient est dispo

int ouIngredient(string nomIngredient){
	int i=0;int j=0;
	for (i=0; i<10;i++){
		for (j=0;i<5;j++){
			
		}
	}
}




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

/* lecture des lignes de la facture */
int i;
string rep;
double prix;
int quantite;
//rep="o";  
printf ("Gestion de la facture \n");

totalprix=0;

printf("quantite : (tapez 0 pour arrêter)\n");
cin>>quantite;

i=0; // c'est le premiere pizza

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
{
                       
int j;                       

system("PAUSE");
cout<<"reste à mettre en forme la présentation de la facture "<<endl;
system("PAUSE");

// pour afficher

cout<<"affichage définitif de la pizza"<<endl;
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

cout<<"      quantité"<<"    "<<"référence"<<"    "<<"désignation"<<"  prix    "<<"total"<<endl;

for (j=0;j<nbreligne;j++)
{
 cout <<"N. "<<j+1<<",  "<<quantitepizza[j]<<"           "<<" refe" <<j+1<<"    "<<"nompizz"<<j+1;
 cout <<"      "<<prixpizza[j]<<"    "<< quantitepizza[j]*prixpizza[j]<<endl;
}    
cout<<endl<<endl;
cout<<"                                                        total: "<<totalprix;
cout<<endl;
cout<<endl;
 
  system("PAUSE");  
	

}
// programme principal

int main()
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
	string ingrediant; 
	int nbreligne; /* nombre de ligne dans la commande */
	
	int indice; // contient le numéro de pizza dans le tableau des pizzas

/* début du programme */

saisirLesPizzas();

affichePizza();

saisirLesIngredients();

afficheIngredients();

saisirLesIngredientsPizzas();

afficheLesIngredientsPizzas();
string ingrediant="ananas";
affichePizzaAvecLIngrediant(ingrediant);
string ingrediant="Anchois";
affichePizzaAvecLIngrediant(ingrediant);

indice = ouPizza("Calzone");
cout<<endl;
cout<<"pizza Calzone, à l'indice : " <<indice;
cout<<endl;


 

string nomPizza ="Hawaï"
indice = ouPizza(nomPizza);
cout<<endl;
cout<<"pizza Calzone, à l'indice : " <<indice;
cout<<endl;
// Ecrire est-ce que je peux faire une calzone ??
// Il faut vérifier la présence des ingrédients.
// avec la bonne table des ingrédients


/* traitement du client */

saisirLesInfos(civilite,nom,prenom,rue,cpos,ville);

// on va calculer et sauvegarder le nombre de lignes
nbreligne=calculprix(prixpizza, quantitepizza, totalprix);  
 
// affichage de la facture

afffacture(civilite,nom,prenom,rue,cpos,ville,prixpizza, quantitepizza, totalprix, nbreligne);   
 
  system("PAUSE");  
}

