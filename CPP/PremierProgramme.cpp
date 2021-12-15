#include <stdio.h>
#include <iostream>
#include <string>

using namespace std; 

int main()
{
	/* début du programme */
int a,b,ma,mb;  // déclaration des variables

	cout<<("Entrez 2 valeurs positives : \n");
    cout<<"saisir la première valeur \n";
    cin>>a;
    cout<<"saisir la deuxième valeur \n";
	cin>>b;

	/* sauvegarde des valeurs de travail */
	ma=a;
	mb=b;

	/* recherche */
	while (ma != mb)  //boucle
	{	if (ma<mb)
			ma = ma+a;
		else
			mb = mb+b;
	}   /*fin du while  */

	/*  Affichage du résultat */
	cout<<"à partir de "<<a<<" et de "<<b<<" on obtient: "<<ma;
	cout<<"\n";

	system("PAUSE");

}  /* fin du programme  */
