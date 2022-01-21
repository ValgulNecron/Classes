#include <iostream>
#include <cstdlib>
#include <time.h>

/* J'ai d�cid� de vous aider � comprendre le fonctionnement de mon programme
Vous trouverez : 
-la r�ponse � la question 1 et son explication 
-la r�ponse � la question 2 et son explication
-une partie de la r�ponse � la question 3
-des ressources pour s'am�liorer en c++

C'est la derni�re fois que je ferais �a.*/

using namespace std;

//d�claration des 3 tableaux : 

string tabAgence[4];			//le tableau avec les agences 
string tabDestination[7];		//Celui avec les destinations
double tabPrix[4][7];			//Et celui qui contient les prix par agence et par destination

/*Solution � la question 1 :
	cr�ation d'une proc�dure qui contient 
	les valeurs des deux premiers tableaux*/

void nomAgenceDestination()		
/*Contrairement � ce que l'on pourrait croire,
il n'est pas obligatoire de d�clarer les valeurs des 
tableaux dans des proc�dures s�par�s. 
On peut tr�s bien le faire en une seule proc�dure,
comme ce qui est demand� dans la question. 
*/
{
	tabAgence[0]="Nlle Frontiere";  //d�claration des valeurs du tableau des agences
	tabAgence[1]="FRAM";
	tabAgence[2]="Rev'Evasion'";
	tabAgence[3]="Starter";

	tabDestination[0]="Grece";		//d�claration des valeurs du tableau des destinations
	tabDestination[1]="Italie";
	tabDestination[2]="Crete";
	tabDestination[3]="Rhodes";
	tabDestination[4]="Turquie";
	tabDestination[5]="Egypte";
	tabDestination[6]="Canarie";	
}

/*R�ponse � la question 2 :
	Cr�ation d'une proc�dure qui va g�n�rer al�atoirement
	les prix de chaques voyages, et qui va remplir
	le troisi�me et dernier tableau avec les prix g�n�r�s*/

void prixAgenceDestination()

{
	//Dans cette proc�dure, on va d�clarer localement les valeurs i et j.

	int i;	
	int j;	
	
	/*Ensuite, on utilise le programme "al�atoire.cpp" que nous a donn� le prof, 
	afin de comprendre comment on fait pour g�n�rer un nombre al�atoirement en c++*/
	
	//On retrouve les 3 commandes suivantes dans le programme "aleatoire.cpp"
	//Elles permettent justement de g�n�rer un chiffre al�atoire
	//C'est un outil surprise qui nous servira plus tard. 
	time_t seconds;
	time(&seconds);
	srand((unsigned int) seconds);
	
	/*Maintenant qu'on a d�clar� toutes les variables, on entre dans le vif de cette proc�dure :
	Je rappelle que le r�le de cette proc�dure est de g�n�rer al�atoirement les prix
	de chaques voyages, et de remplir le troisi�me tableaux (qui contient les prix) */
	
	/*L'id�e est donc de parcourir chaque case du tableau "tabPrix" 
	et de les premplir une par une. */
	
	//Pour cela, on va cr�er une boucle (donc un "for"), qui va traverser chaque case du tableau et lui donner une valeur.
	
	/*Cependant, "tabPrix" est un tabelau � deux dimensions, 
	il nous faut donc une boucle pour traverser l'axe Y et une autre pour traverser l'axe X.*/
	
	for (i=0; i<4; i++) 
	//Cr�ation de la premi�re boucle qui va traverser les cases dans l'axe X (les lignes du tableau)
	//i=0 donne une valeur � la variable i que l'on a d�clar� au d�but de la proc�dure. Ca permet de donner un point de d�part � la boucle.
	//i<4 donne "un point de fin" � la boucle. Quand la variable i sera �gale � 4, la boucle s'arr�tera puisque 4 a �t� d�clar� commme ne pouvant �tre d�pass� par i, qui doit �tre strictement inf�rieur � ce chiffre.
	//i++ augmente la variable i de 1. 
	//Th�oriquement cette boucle va se r�p�ter 4 fois puis s'arr�tera, puisque i ne pourra pas aller plus loin. 
	{
		for (j=0; j<7; j++) 
		// Puis cr�ation de la deuxi�me boucle dans la premi�re boucle, c'est ce qu'on appelle une imbrication.
		// Cette boucle traversera l'axe Y (les colonnes du tableau)
		//L'explication pr�c�dente vaut aussi pour cette boucle.
		{	
			tabPrix[i][j]=rand() % 700;
			/*Enfin, c'est cette commande qui va g�n�rer al�atoirement un prix et le mettre dans le tableau.
			tabPrix[i][j] est une "bo�te" qui va gentiment accueillir et stocker la valeur que "=rand()" va lui g�n�rer
			En effet, "rand()" est li� aux trois lignes que l'on a d�clar� plus t�t, et g�n�re al�atoirement un chiffre.
			Enfin, le "% 700" est totalement dispensable. En faite, il permet de fixer une limite au "rand()". 
			Cela veut donc dire que "rand () % 700" g�n�re un chiffre al�atoire entre 0 et 700.*/
		}
	}
	/* Nous avons donc cr�� une boucle imbriqu�e dans une autre boucle et qui parcourent les cases du tableau une par une.
	Puis nous avons ins�r� une commande qui permet de g�n�rer al�toirement un nombre entre 0 et 1000 et qui va donner ce nombre a chaque cases du tableau rencontr�.
	Si vous avez encore du mal � saisir le fonctionnement, essayez de prendre le tableau qu'il y'a dans l'�nonc� de l'exercice et de le parcourir,
	au fur et � mesure que le programme avance.*/
}

void afficheTabPrix()
/* Cr�ation d'une nouvelle proc�dure.
Celle-la permet d'afficher le contenu de "tabPrix"
Ce n'est pas demand� dans l'exercice, mais c'est pratique 
pour savoir si la proc�dure que l'on a �crite avant fonctionne.*/
{
	int i;		//A partir de maintenant je n'explique plus ce qui a d�j� �t� dit.
	int j;
	
	for (i=0; i<4; i++)
	{
		cout<<"Les prix de : "<<tabAgence[i]<<endl;
		for (j=0; j<7; j++)
		{
			cout<<"En destination "<<tabDestination[j]<<" : "<<endl;
			cout<<tabPrix[i][j]<<" euros"<<endl;
		}
		cout<<endl;
	}
}

/*R�ponse � la question 3 : 
		Notre but est : 
		Pour chaque destination, d'afficher l'agence qui propose le voyage le plus ch�re et � quel prix.
		Je n'ai pas encore trouv� la solution � cette question et j'ignore si je suis sur la bonne voie.*/

void agencePlusChere()
{
	int i;
	int j;
	int valeur;

	for (j=0; j<7; j++)
	{
		valeur=0;
		for (i=0; i<4; i++)
		{
			if (tabPrix[i][j] > valeur)
			{
				valeur=tabPrix[i][j];
			}
			
		}
		
		cout<<"Agence la plus chere pour aller a "<<tabDestination[j]<<endl;
		
		cout<<valeur<<" euros"<<endl;
	}
}

int main()
{
	/*Dans le main, pensez � bien d�clarer toutes les proc�dures qui ont �t� faites 
	C'est comme si le "main" �tait une personne devant une table et que les proc�dures �taient des interrupteurs qui font des choses
	En d�clarant la proc�dure dans le "main" on pose un interrupteur sur la table 
	Si on les d�clare tous dans le bon ordre, le "main" n'a plus qu'a appuyer sur tous les boutons pour que des choses se produisent*/
	
	nomAgenceDestination(); 
	prixAgenceDestination();
	afficheTabPrix();
	agencePlusChere();
	
	/*J'ai essay� de donner les explications les plus claires possibles pour aider tout le monde. 
	Je ne referais plus �a, par contre c'est avec plaisir que je vais vous expliquer comment j'ai acquis mon niveau en un week-end:
	
	-L'OpenClassroom sur le C++.
	-Les exercices en C++ sur le site France IOI.
	-Relire le corrig� du 1er contr�le de Kreyder et le refaire plusieurs fois.
	
	Je pose les interrupteurs sur la table, � vous de voir si vous voulez appuyer dessus.
	je sui a laeropor bisouuuu je manvol.
	Alcides.
}
