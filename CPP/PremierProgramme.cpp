#include <stdio.h>
#include <iostream>
#include <string>

using namespace std; 

int main()
{
	/* d�but du programme */
int a,b,ma,mb;  // d�claration des variables

	cout<<("Entrez 2 valeurs positives : \n");
    cout<<"saisir la premi�re valeur \n";
    cin>>a;
    cout<<"saisir la deuxi�me valeur \n";
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

	/*  Affichage du r�sultat */
	cout<<"� partir de "<<a<<" et de "<<b<<" on obtient: "<<ma;
	cout<<"\n";

	system("PAUSE");

}  /* fin du programme  */
