#include <stdio.h>
#include <iostream>
#include <string>
                            //.h langage C sinon C++
/* corrigï¿½ nï¿½ 5, M. Kreyder */

using namespace std; // espace de travaille nommer
string nompizza[10];
string ingrediantpizza[10][5];
string ingrediant[50];
int tabQIngredient[50];



bool rechpizza(string nomP){
	int i=0;
	while((i<10)and (nompizza[i]!=codepizzacommande)){
		i++
	}
	if(i==10){
		return(false);
	}
	else{
		return (true);
	}
}


	
void affiche1ingradiantbis(string ing){
	int i=0;int j=0;
	bool test=false; 
	while (i<10 && test==false)
		{
			if (j>=5){
				j=0
			}
			
			if(j<5)
			{
				if (ingrediantpizza[i][j]==ing)
				{
					cout<<"1ere pizza contenant du"<<ing<<" :"<<nompizza[i]<<endl;
					test=true;
				}
			j++;
			}
		i++;
		}
	if(i>10){
		cout<<"aucune pizza avec"<<ing<<endl;
	}
}



int ouIngredient(string nomIngredientpara, int& qteDispo){
	int iretour;
	int i;
	bool test =false;
	while (i<10 && test==false){
		if(ingrediant[i]==nomIngredientpara){
			test=true;
			iretour= i;
		}
		i++;
	}
if (test == true){
	qteDispo = tabQIngredient[iretour];
	return (iretour); // indice de l'ingredient si il existe mais qu'il est pas dispo 
	}
else{
	qteDispo = -1;
	return (-1); // -1 pour dire qu'il existe pas 
}
}



void saisirQingredient(){
	int i;
	for (i=0;i<50;i++){
		tabQIngredient[i]=1;
	}	
	
}



void copisaisirLesIngredients()
{
  int i;
     
  ingrediant[0]="Poivrons";
  ingrediant[1]="Ail";
  ingrediant[2]="Anchois";
  ingrediant[3]="Tomates";
  ingrediant[4]="cabillaud";
  ingrediant[5]="Crevettes";
  ingrediant[6]="Gruyere";
  ingrediant[7]="Champignons";
  ingrediant[8]="Oignons";  
  ingrediant[9]="Lardons";
  //
  // puis mettre x dans le reste des ingrédients de 10 à 29
  for (i=10;i<30;i++)
     ingrediant[i]="X";
  
}  



int oupizza(string pizza){
	int i = 0;bool test =false; int iretour;
	while (i<10 && test==false){
		if(nompizza[i]==pizza){
			test=true;
			iretour= i;
		}
		i++;
	}
if(iretour<10){
return iretour;
}
else{
iretour=-1;
return iretour;
}
}



void verifingredient(int i){
	int j;
	for (j=0; j<5; j++){
		if(ingrediantpizza[i][j]=="chorizo"){
			cout<<"imposible de faire "<<nompizza[i]<<" car plus de chorizo"<<endl;
		}
	}
}



void saisirLesInfos(string& civilite, string& nom,string& prenom,string& rue,string& cpos,string& ville) // declaration procedure et recup info
{

system("PAUSE");
cout<<"reste ï¿½ mettre en forme la prï¿½sentation de la facture "<<endl;
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

}



int calculprix(double prixpizza[], int quantitepizza[], double& totalprix)
{ 
int i;
string rep;
double prix;
int quantite;
printf ("Gestion de la facture \n");

totalprix=0;

printf("quantite : (tapez 0 pour arrêter)\n");
cin>>quantite;

i=0; 

while (quantite>0 && i<10)
{
    quantitepizza[i]=quantite;  
  
	printf("prix de la pizza : ");
	cin>>prix;
	prixpizza[i]=prix;

	totalprix=totalprix+prix*quantite;
	
    printf("quantite : (tapez 0 pour arrêter)\n");
    cin>>quantite;
    
    i++;
}

printf("total de la facture : ");
cout<<totalprix<<endl;
return i;

}



/*void afficherpizza()
{
	int i = 0;
	while((i!=10) || (i!=10)){
		cout <<"nom de la pizza "<<i<<" :"<<nompizza[i]<<endl;;
		i=i+1;
	}
}*/



void afficherpizza2()
{
	int i=0;
	for (i=0;i<10;i++){
		cout <<"nom de la pizza "<<i<<" :"<<nompizza[i]<<endl;
	}
}



void afficheringrediant()
{
	int i;
	int j;
	for (i=0;i<10;i++){
		for(j=0;j<5;j++){
			cout <<"ingrediant de la pizza "<<i<<" :"<<ingrediantpizza[i][j]<<endl;
		}
		cout<<endl;
	}
}



/*void saisirlespizza()
{
	int i=0;
	while((i!=10) || (i!=10)){
		cout <<"nom de la pizza "<<i<<" :";
		cin>>nompizza[i];
		i=i+1;
	}
}*/



void saisirlespizza2(){
	nompizza[0]="4 fromages";
	nompizza[1]="Margherita";
	nompizza[2]="alsacienne";
	nompizza[3]="Napolitaine";
	nompizza[4]="Diavola";
	nompizza[5]="Romaine ";
	nompizza[6]="Capricciosa ";
	nompizza[7]="Quatre saisons";
	nompizza[8]="Sicilienne";
	nompizza[9]="Calzone";
}



void saisirlesingrediant(){

	
	
	ingrediantpizza[0][0]="gruyere";
	ingrediantpizza[0][1]="bri";	
	ingrediantpizza[0][2]="parmezen";
	ingrediantpizza[0][3]="fromage";
	ingrediantpizza[0][4]="base tomate";
	ingrediantpizza[1][0]="base tomate";
	ingrediantpizza[1][1]="chorizo";
	ingrediantpizza[1][2]="lardon";
	
	ingrediantpizza[8][4]="chorizo";

}



void verificationingredient()
{
	int i;int j;int k=0;int r=0;int d;
	string temps1;
	int tempsi;
	string ingrediantpasdispo[50];
	ingrediantpasdispo[0]="chorizo";
	for (i=0;i<10;i++)
	{
		for(j=0;j<5;j++)
		{
			temps1=ingrediantpizza[i][j];
			for(d=0;d<50;d++)
			{
				if (ingrediantpasdispo[d]=="")
				{
				}
			else{
				if (temps1==ingrediantpasdispo[d])
					{
						cout<<"imposible de faire "<<nompizza[i]<<" car plus de "<<ingrediantpasdispo[d]<<endl;
					}
				else{}
			}
			}
		}
	}
}



/* void verificationchorizo(int pizzachoisi[])
{
	int i;int j;int k=0;int r=0;
	int d;
	string temps1;
	int tempsi;
	int tempstabl[10];
	for (i=0;i<10;i++){
		for(j=0;j<5;j++){
			temps1=ingrediantpizza[i][j];
			if (temps1=="chorizo")
			{
				tempstabl[k]=i;
				k++;
			}
			else{}
		}
	}
	for (i=0;i<k;i++)
	{
		tempsi=tempstabl[i];
		for(d=0;d<10;d++)
		{
			if(tempsi==pizzachoisi[d])
			{
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"y'en a plus en cuisine"<<endl;
			}
			else{}
		}
	}
}
*/



void afficherchorizo()
{
	int i;int j;int k=0;int r=0;
	string temps1;
	int tempsi;
	int tempstabl[10];
	for (i=0;i<10;i++){
		for(j=0;j<5;j++){
			temps1=ingrediantpizza[i][j];
			if (temps1=="chorizo")
			{
				tempstabl[k]=i;
				k++;
			}
			else{}
		}
	}
cout<<"liste pizza contenant du chorizo :"<<endl;
	for (i=0;i<k;i++)
	{
		tempsi=tempstabl[i];
		cout<<nompizza[tempsi]<<endl;
	}
	
}



void afficherpremierchorizo2(){
	int i;int j;
	bool test=false; 
	while (i<10 && test==false)
		{
			if(j<5)
			{
				if (ingrediantpizza[i][j]=="chorizo")
				{
					cout<<"1ere pizza contenant du chorizo :"<<nompizza[i]<<endl;
					test=true;
				}
			j++;
			}
			else{
				j=0;
			}
		i++;
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
                if (ingrediantpizza[i][j]==ingrediant)
                      cout<<endl<<"c'est la pizza: "<<nompizza[i]<<" qui contient du "<<ingrediantpizza[i][j]<<endl; 
              }
        }      
     
} 



void afficherpremierchorizo()
{
	int i;int j;int r=0;
	string temps1;
	int tempsi;
	bool test=false; 
	/*for (i=0;i<10;i++){
		for(j=0;j<5;j++){
			temps1=ingrediantpizza[i][j];
			if (temps1=="chorizo")
			{
				tempstabl[k]=i;
				k++;
			}
			else{}
		}
	}*/
	while (i<10 && test==false)
		{
			while(i<5 && test==false)
			{
				temps1=ingrediantpizza[i][j];
				if (temps1=="chorizo")
				{
					tempsi=i;
					test=true;
				}
				else{}
			j++;
			}
		i++;
		}
tempsi=tempsi-1;
cout<<"1ere pizza contenant du chorizo :"<<nompizza[tempsi]<<endl;
}



void affichagefacture(string civilite,string nom,string prenom,string rue,string cpos,string ville,int quantitepizza[],double prixpizza[],double totalprix,int nbreligne)
{
	int i;
	int j;
    cout<<"affichage dï¿½finitif de la pizza"<<endl;
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

    cout<<"      quantitï¿½"<<"    "<<"rï¿½fï¿½rence"<<"    "<<"dï¿½signation"<<"  prix    "<<"total"<<endl;

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



bool commande(string pizzacommandee){
	int numpizza;
	int numingredient; 
	bool bContinue==true; 
	int qtedispo;
	if (numpizza(oupizza(pizzacommandde))>=0){
		while ((j<5)&&(bContinue==true))
		{
			numingredient=ouIngredient(ingrediantpizza[numpizza][j], qtedispo);
			if (qtedispo==0)
			{
				bContinue=false;
			}
			else
			{
				j++;
			}
		}
	}
	else {
		//pizza pas existente 
		// ou manque ingredient 
		bContinue=false; 
	}
	return bContinue; 
}



int main() //programme start ici
{
	int i;  // sert ï¿½ gerer le nombre de lignes dans la commande,
    int j; // permet l'affichage des lignes de la facture de la pizza
	string civilite;
	string nom;
	string prenom;
	string rue;
	string cpos;
	string ville;
	string rep;
	double totalprix;
	int quantite;
	double prix;
    int quantitepizza[10];  
	double prixpizza[10];           //qui vont de nompizza[0]ï¿½ nompizza[9]
	// les 3 tableaux son lier
	int pizzachoisi[10];
	int nbreligne; /* nombre de ligne dans la commande */
	
	
	
	
	int placementMargherita;
	
/* dï¿½but du programme */


/* appelle procedure avec parametre
 on va calculer et sauvegarder le nombre de lignes */

 	saisirlespizza2();
	saisirlesingrediant();
	copisaisirLesIngredients();
	
	
	
	afficherpizza2();
	afficheringrediant();
 
 
 
  	afficherchorizo();
  	
  	string ingrediant="Chorizo";
	affichePizzaAvecLIngrediant(ingrediant);
  	
	afficherpremierchorizo();
	
 	//verificationingredient();
	int indice;
	int qteDispo;

	string pizza="Margherita";
	placementMargherita = oupizza(pizza);
	
	
	string noming="chorizo";
	indice=ouIngredient(noming,qteDispo);
	cout<<endl;
	cout<<"ingredient "<<noming<<" , a l'indice : "<<indice<<endl;
	cout<<"quantite restante : "<<qteDispo<<endl;
	
	
	verifingredient(placementMargherita);
	
		
    saisirLesInfos(civilite,nom,prenom,rue,cpos,ville);
	
	nbreligne=calculprix(prixpizza, quantitepizza,totalprix);  // appelle procedure avec parametre

	affichagefacture(civilite,nom,prenom,rue,cpos,ville,quantitepizza,prixpizza,totalprix,nbreligne);

// pour afficher


	
	//verificationchorizo(pizzachoisi);
	//verificationingredient(pizzachoisi);
system("PAUSE");
}
