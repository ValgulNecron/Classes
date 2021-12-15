int main(){
	string monhabitation;
	printf("nom de l'habitation");
	cin>>monhabitation;
	if (estunemmaison(monhabitaion)==1){
		if(aunjardin(monhabitation)==1){cout<<"il y a un jardin"<<endl;}
		else{cout<<"y a pas de jardin"<<endl;}}
	else{
		cout<<"c est un apartement"<<endl;
		if(vusurmer(monhabitation)==1){cout<<"il a vue sur mer"<<endl;}
		else{cout<<"il a pas vue sur mer"<<endl;}
		cout<<"il y a "<<nbrepiece(monhabitation)<<"piece"<<endl;
		cout<<"il fait "<<mettrecarre(monhabitation)<<"m²"<<endl;}}
