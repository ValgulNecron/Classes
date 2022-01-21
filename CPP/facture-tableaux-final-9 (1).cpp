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
  nomIngredient[10]="Ananas";
  //
  // puis mettre x dans le reste des ingrédients de 10 à 29
  for (i=11;i<30;i++)
     nomIngredient[i]="X";
  
}              


void saisirLesQuantiteIngredients()
{
  int i;
     
  nomIngredient[0]=2; //"Poivrons";
  nomIngredient[1]=  10;//"Ail";
  nomIngredient[2]=0; //"Anchois";
  nomIngredient[3]=20; //"Tomates";
  nomIngredient[4]=0; //"cabillaud";
  nomIngredient[5]=20; //"Crevettes";
  nomIngredient[6]=15; //"Gruyere";
  nomIngredient[7]=20; //"Champignons";
  nomIngredient[8]=0; //"Oignons";  
  nomIngredient[9]=2; //"Lardons";
  nomIngredient[10]=3;//"Ananas";
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
     tabNomPizzaIngredients[0][0] = "Tomate";
     tabNomPizzaIngredients[0][1] = "Chorizo";
     //
     tabNomPizzaIngredients[5][4] = "Patate";
     //
     tabNomPizzaIngredients[6][3] = "Chorizo";
     tabNomPizzaIngredients[8][1] = "Chorizo";
     //
      tabNomPizzaIngredients[0][2] = "Ananas";
      tabNomPizzaIngredients[0][3] = "Anchois";
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


void affiche1IngredientPizzas(string ing)
{ // je veux m'arrêter dès que je trouve une pizza qui a l'ingrédient
int i,j;
 
     cout<<endl<<"les pizzas avec les ingrédients"<<endl;    
     i=0;
     j=0;
     while ((i<10) and (j<5) and (bcontient == false))
        {
			if (tabNomPizzaIngredients[i][j] == ing)
				bcontient=true;
			else
			{
				if (j<5)
				{
					j++;
				}
				else
				{
					j=0;
					i++;
				}
			}
				    
          //j = 0;
		  //while ((j<5) and (tabNomPizzaIngredients[i][j] != ing))
              {                
              
                cout<<tabNomPizzaIngredients[i][j]<<endl;
                j++;
              }
        j=0;
        i++;
        }      
    if (bcontient)
     	{
     		cout<<"la pizza"<<nompizza[i]<<" contient du"<<ing;
		}
	else
		{
			cout<<"pas d'ingrédient"<<ing<<" pour mes pizzas";
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

void affichagePizzaAvecIngedient(string ing)
{
int i,j;
	cout<<endl<<"les pizzas avec "<<ing<<endl; 
	for (i=0;i<10;i++)
	
	{
		for (j=0;j<5;j++)
              {                
                if (tabNomPizzaIngredients[i][j]==ing)
                      cout<<endl<<"c'est la pizza: "<<nompizza[i]<<" qui contient du "<<tabNomPizzaIngredients[i][j]<<endl; 
              }
	}
	
	
}

bool rechPizza(string codePizzaCommande)
{
int i = 0; 

while ((i<10) and (nomPizza[i] != codePizzaCommande))
{
	i++;
}
	
if (i==10)
	{
		return false
	}
else
	{
		return true;
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
           
int ouIngredient(string nomIng, int & qteDispo)
{
	int i = 0;
    bool btrouve = false; 
      
    while ((i<30) and (btrouve==false))
            {
             if (nomIngredient[i] == nomIng)
                 {
                  btrouve=true;
                  }
             else
                {
                 i++;  // élément suivant
                 } 
            }
  if (btrouve==true)
  
     {
     	 qteDispo = tabQIngredient[i];
		 return (i);
	 }
      
  else
  {
  	qteDispo = 0;
  	return (-1); 
  }
      
}
  
bool commande(string PizzaCommandee)
{
	int numPizza;
	int numIngredient;
	bool bContinue = true;
	int qteDispo;
	
	if ((numPizza = ouPizza(PizzaCommandee))>0)
		{//la pizza existe
		// on peut donc parcourir les ingrésients de la pizza
		
		while ((j<5) and (bContinue))
		{
			numIngredient = ouIngredient(tabNomPizzaIngredients[numPizza][j], qteDispo);
			
			if (qteDispo == 0)
				{
					bContinue = false;
				}
			else	// l'ingrédient existe et est disponible
				j++;
		}
	else
		//code retour à -1
		bContinuec=false;
		
		//la pizza n'existe pas
		//quantité à zéro;
		// tous les ingrédients sont à 0
		}
	return (bContinue)
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
	
	int nbreligne; /* nombre de ligne dans la commande */
	
	int indice; // contient le numéro de pizza dans le tableau des pizzas

	string ingredient;
	
	string nomIng;
/* début du programme */

saisirLesPizzas();

affichePizza();

saisirLesIngredients();

afficheIngredients();

saisirLesIngredientsPizzas();

afficheLesIngredientsPizzas();

afficheChorizoPizzas();

ingredient ="Ananas";
affichagePizzaAvecIngedient(ingredient);

ingredient ="Anchois";
affichagePizzaAvecIngedient(ingredient);



indice = ouPizza("Calzone");
cout<<endl;
cout<<"pizza Calzone, à l'indice : " <<indice;
cout<<endl;

//nompizza ="Kebab";
//indice = ouPizza(nompizza);
//cout<<endl;
//cout<<"pizza"<<nompizza<<", à l'indice : " <<indice;
//cout<<endl;


//nomIng =("Anchois");
//indice = ouIngredient(nomIng,qteDispo);
//cout<<endl;
//cout<<"ingrédient"<<nomIng<<", à l'indice : " <<indice<< " avec dispo"<<qteDispo;
//cout<<endl;

//cout<<tabQIngredient[indice];



indice = ouIngredient("Ananas");
cout<<endl;
cout<<"ingrédient Ananas, à l'indice : " <<indice;
cout<<endl;

// Ecrire est-ce que je peux faire une calzone ??
// Il faut vérifier la présence des ingrédients.
// avec la bonne table des ingrédients
if (commande(pizzaCommandee))
	{
		cout<<"La pizza"<<pizzaCommandee<< " est disponible en cuisine ";
	}
	else
	{
		cout<<"La pizza commendee"<<pizzaCommandee<< " n'est pas disponible en cuisine ";
		cout<<endl;
		cout<<"il manque des ingrédients";
	}


/* traitement du client */

saisirLesInfos(civilite,nom,prenom,rue,cpos,ville);

// on va calculer et sauvegarder le nombre de lignes
nbreligne=calculprix(prixpizza, quantitepizza, totalprix);  
 
// affichage de la facture

afffacture(civilite,nom,prenom,rue,cpos,ville,prixpizza, quantitepizza, totalprix, nbreligne);   
 
  system("PAUSE");  
}
