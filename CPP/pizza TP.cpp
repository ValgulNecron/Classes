#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


string nompizza[10];
string codepizza[10];

void creertableaux(){
/* creer les tableaux de pizza et de code de pizza*/
	nompizza[0]="4 fromages";
	nompizza[1]="Margherita";
	nompizza[2]="alsacienne";
	nompizza[3]="Napolitaine";
	nompizza[4]="Diavola";
	nompizza[5]="Romaine ";
	nompizza[6]="Capricciosa ";
	nompizza[7]="Quatre saisons";
	nompizza[8]="Sicilienne";
	nompizza[9]="3fromage";
	codepizza[0]="4FR";
	codepizza[1]="MAR";
	codepizza[2]="ALS";
	codepizza[3]="NAP";
	codepizza[4]="DIA";
	codepizza[5]="ROM ";
	codepizza[6]="CAP";
	codepizza[7]="QUA";
	codepizza[8]="SIC";
	codepizza[9]="3FR";
}
void affichercode(){
/* affiche les code des pizza presente*/
	int i=0;
	for (i=0;i<10;i++){
		cout <<"code pizza dispo"<<i<<" :"<<codepizza[i]<<endl;
	}
}



void trouverpizza(string code,bool& test2){
/* trouve la pizza demander stocker dans le string "code"*/
	string nom;
	int i= 0;
	bool test=false; 
	while (i<10 && test==false)
	{
		if (codepizza[i]==code) /* verifie si le nom de la pizza indiquer et bien la pizza demander*/
		{
			cout<<"vous avez choisie :"<<nompizza[i]<<endl; // indique le nom de la pizza choisie 
			test=true; //met test en true pour stoper le while 
			test2=true; //met test2 en true pour stoper la boucle du main 
		}
		else{}
		i++;
	}
	if(test==false){
		/* indique une erreur dans le code pizza indiquer*/
		cout<<"veuiller verifier le code que vous avez indiquer (faite attention au majuscule)"<<endl;
		test2=false;
	}
}

void demandepizza(string& code){
/* demande le code pizza*/
	cout<<"entrer le code pizza :";
	getline(cin, code);	
}


int main(){
	creertableaux(); // envoie dans le void "creertableaux"
	affichercode();// envoie dans le void "affichercode"
	string code;
	bool test2 = false;
	while(test2==false){ // bouvle tant que test2 n'est pas vrai et que donc une pizza a etait trouver 
		demandepizza(code); // envoie dans le void "demandepizza"
		trouverpizza(code,test2); // envoie dans le void "trouverpizza"
	}
}
