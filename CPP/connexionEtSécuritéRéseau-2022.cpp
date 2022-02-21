#include <stdio.h>
#include <iostream>
#include <string>
using namespace std; 

class sommeN
{
	private:
		int i;
		int s; 
	public:
		sommeN();
		void initialiseToi();
		void faisSomme(int n);
		void afficheSomme();
};
sommeN::sommeN()
{}
void sommeN::initialiseToi(){
	i=0;
	s=0;
}
void sommeN::faisSomme(int n){
/*	for(i=0;i<=n;i++){
		s=s+i;
	}
*/
	while(i<=n){
		s=s+i;
		i++;
	}
}
void sommeN::afficheSomme(){
	cout<<s<<endl;
}





int main(){
	int n;
	cout<<"entrer un nombre : ";
	cin>>n;
	cout<<endl;
	sommeN obj1;
	obj1.initialiseToi();

	obj1.faisSomme(n);
	obj1.afficheSomme();
}
