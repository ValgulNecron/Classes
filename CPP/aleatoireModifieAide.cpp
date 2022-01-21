#include <iostream>
#include <cstdlib>
#include <time.h>

/* J'ai décidé de vous aider à comprendre le fonctionnement de mon programme
Vous trouverez : 
-la réponse à la question 1 et son explication 
-la réponse à la question 2 et son explication
-une partie de la réponse à la question 3
-des ressources pour s'améliorer en c++

C'est la dernière fois que je ferais ça.*/

using namespace std;

//déclaration des 3 tableaux : 

string tabAgence[4];			//le tableau avec les agences 
string tabDestination[7];		//Celui avec les destinations
double tabPrix[4][7];			//Et celui qui contient les prix par agence et par destination

/*Solution à la question 1 :
	création d'une procédure qui contient 
	les valeurs des deux premiers tableaux*/

void nomAgenceDestination()		
/*Contrairement à ce que l'on pourrait croire,
il n'est pas obligatoire de déclarer les valeurs des 
tableaux dans des procédures séparés. 
On peut très bien le faire en une seule procédure,
comme ce qui est demandé dans la question. 
*/
{
	tabAgence[0]="Nlle Frontiere";  //déclaration des valeurs du tableau des agences
	tabAgence[1]="FRAM";
	tabAgence[2]="Rev'Evasion'";
	tabAgence[3]="Starter";

	tabDestination[0]="Grece";		//déclaration des valeurs du tableau des destinations
	tabDestination[1]="Italie";
	tabDestination[2]="Crete";
	tabDestination[3]="Rhodes";
	tabDestination[4]="Turquie";
	tabDestination[5]="Egypte";
	tabDestination[6]="Canarie";	
}

/*Réponse à la question 2 :
	Création d'une procédure qui va générer aléatoirement
	les prix de chaques voyages, et qui va remplir
	le troisième et dernier tableau avec les prix générés*/

void prixAgenceDestination()

{
	//Dans cette procédure, on va déclarer localement les valeurs i et j.

	int i;	
	int j;	
	
	/*Ensuite, on utilise le programme "aléatoire.cpp" que nous a donné le prof, 
	afin de comprendre comment on fait pour générer un nombre aléatoirement en c++*/
	
	//On retrouve les 3 commandes suivantes dans le programme "aleatoire.cpp"
	//Elles permettent justement de générer un chiffre aléatoire
	//C'est un outil surprise qui nous servira plus tard. 
	time_t seconds;
	time(&seconds);
	srand((unsigned int) seconds);
	
	/*Maintenant qu'on a déclaré toutes les variables, on entre dans le vif de cette procédure :
	Je rappelle que le rôle de cette procédure est de générer aléatoirement les prix
	de chaques voyages, et de remplir le troisième tableaux (qui contient les prix) */
	
	/*L'idée est donc de parcourir chaque case du tableau "tabPrix" 
	et de les premplir une par une. */
	
	//Pour cela, on va créer une boucle (donc un "for"), qui va traverser chaque case du tableau et lui donner une valeur.
	
	/*Cependant, "tabPrix" est un tabelau à deux dimensions, 
	il nous faut donc une boucle pour traverser l'axe Y et une autre pour traverser l'axe X.*/
	
	for (i=0; i<4; i++) 
	//Création de la première boucle qui va traverser les cases dans l'axe X (les lignes du tableau)
	//i=0 donne une valeur à la variable i que l'on a déclaré au début de la procédure. Ca permet de donner un point de départ à la boucle.
	//i<4 donne "un point de fin" à la boucle. Quand la variable i sera égale à 4, la boucle s'arrêtera puisque 4 a été déclaré commme ne pouvant être dépassé par i, qui doit être strictement inférieur à ce chiffre.
	//i++ augmente la variable i de 1. 
	//Théoriquement cette boucle va se répéter 4 fois puis s'arrêtera, puisque i ne pourra pas aller plus loin. 
	{
		for (j=0; j<7; j++) 
		// Puis création de la deuxième boucle dans la première boucle, c'est ce qu'on appelle une imbrication.
		// Cette boucle traversera l'axe Y (les colonnes du tableau)
		//L'explication précédente vaut aussi pour cette boucle.
		{	
			tabPrix[i][j]=rand() % 700;
			/*Enfin, c'est cette commande qui va générer aléatoirement un prix et le mettre dans le tableau.
			tabPrix[i][j] est une "boîte" qui va gentiment accueillir et stocker la valeur que "=rand()" va lui générer
			En effet, "rand()" est lié aux trois lignes que l'on a déclaré plus tôt, et génère aléatoirement un chiffre.
			Enfin, le "% 700" est totalement dispensable. En faite, il permet de fixer une limite au "rand()". 
			Cela veut donc dire que "rand () % 700" génère un chiffre aléatoire entre 0 et 700.*/
		}
	}
	/* Nous avons donc créé une boucle imbriquée dans une autre boucle et qui parcourent les cases du tableau une par une.
	Puis nous avons inséré une commande qui permet de générer alétoirement un nombre entre 0 et 1000 et qui va donner ce nombre a chaque cases du tableau rencontré.
	Si vous avez encore du mal à saisir le fonctionnement, essayez de prendre le tableau qu'il y'a dans l'énoncé de l'exercice et de le parcourir,
	au fur et à mesure que le programme avance.*/
}

void afficheTabPrix()
/* Création d'une nouvelle procédure.
Celle-la permet d'afficher le contenu de "tabPrix"
Ce n'est pas demandé dans l'exercice, mais c'est pratique 
pour savoir si la procédure que l'on a écrite avant fonctionne.*/
{
	int i;		//A partir de maintenant je n'explique plus ce qui a déjà été dit.
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

/*Réponse à la question 3 : 
		Notre but est : 
		Pour chaque destination, d'afficher l'agence qui propose le voyage le plus chère et à quel prix.
		Je n'ai pas encore trouvé la solution à cette question et j'ignore si je suis sur la bonne voie.*/

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
	/*Dans le main, pensez à bien déclarer toutes les procédures qui ont été faites 
	C'est comme si le "main" était une personne devant une table et que les procédures étaient des interrupteurs qui font des choses
	En déclarant la procédure dans le "main" on pose un interrupteur sur la table 
	Si on les déclare tous dans le bon ordre, le "main" n'a plus qu'a appuyer sur tous les boutons pour que des choses se produisent*/
	
	nomAgenceDestination(); 
	prixAgenceDestination();
	afficheTabPrix();
	agencePlusChere();
	
	/*J'ai essayé de donner les explications les plus claires possibles pour aider tout le monde. 
	Je ne referais plus ça, par contre c'est avec plaisir que je vais vous expliquer comment j'ai acquis mon niveau en un week-end:
	
	-L'OpenClassroom sur le C++.
	-Les exercices en C++ sur le site France IOI.
	-Relire le corrigé du 1er contrôle de Kreyder et le refaire plusieurs fois.
	
	Je pose les interrupteurs sur la table, à vous de voir si vous voulez appuyer dessus.
	je sui a laeropor bisouuuu je manvol.
	Alcides.
}
