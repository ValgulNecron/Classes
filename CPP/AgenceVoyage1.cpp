#include <stdio.h>
#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>


using namespace std;

string nomAgence[4];
string nomDestination[7];
int prixDestination[4][7];
int prixDestination2[4][7];
void SaisieAgences()
{
	nomAgence[0]="Nlle Frontière";
	nomAgence[1]="FRAM";
	nomAgence[2]="Rev'Evasion";
	nomAgence[3]="Starter";
	
}

void SaisieDestination()
{
	nomDestination[0]="Grèce";
	nomDestination[1]="Italie";
	nomDestination[2]="Crête";
	nomDestination[3]="Rhodes";
	nomDestination[4]="Turquie";
	nomDestination[5]="Egypte";
	nomDestination[6]="Canarie";
	
}

int aleatoire()
{
	int i = 0;
	const int MIN = 15;
	const int MAX = 1000;

	int random;
	random = rand() % (MAX - MIN);
	return(random);
	
	
}

int leprixDestination()
{
	int i;
	int j;
	
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<7;j++)
		prixDestination2[i][j] = aleatoire();
	
	}
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<7;j++)
		cout<<prixDestination2[i][j]<<endl;
	}
	
	
}

void expensive()
{
	int i;
	int j;
	int ib;
	int jb;
	int prix = 0;
	int prix2; 
	
	for (i=0;i<4;i++);
	{
		for (j=0;j<7;j++)
		{
		if (prix<=prixDestination2[i][j])
		{
			ib=i;
			jb=j;
		}
		}	
		
	}
	cout<<"le plus cher "<<prixDestination2[ib][jb]<<endl;
	cout<<"L'agence/destination la plus chère: "<<nomAgence[ib]<<"/"<<nomDestination[jb]<<"au prix de "<<prixDestination2[ib][jb]<<"euros"<<endl;
}


int main()
{
	SaisieAgences();
	SaisieDestination();
	leprixDestination();
	expensive();
}
