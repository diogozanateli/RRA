#include <iostream>
using namespace std;

struct peso_ideal{
	string nome;
	char sexo;
	float altura, peso;	
};
int main(){
	int n, c;
	cin >> n;
	float pesado=0;
	peso_ideal dados[n];
	for (int i=0 ; i<n ; i++){
		cin >> dados[i].nome >> dados[i].sexo >> dados[i].altura >> dados[i].peso;
		pesado = dados[i].peso;
		if(dados[i].peso > pesado){
			pesado = dados[i].peso;
			c=i;
		}
	}		
	cout << dados[c].nome << endl;
	for ( int i=0 ; i<n ; i++){
		if((dados[i].sexo=='H') and (((dados[i].peso)>((72.7*dados[i].altura)-58.0)) or ((dados[i].peso)<((72.7*dados[i].altura)-58.0)))){
			cout << dados[i].nome << ((72.7*dados[i].altura)-58.0)-(dados[i].peso) << endl;   
	}
		if((dados[i].sexo=='M') and (((dados[i].peso)>((62.1*dados[i].altura)-44.7)) or ((dados[i].peso)<((62.1*dados[i].altura)-44.7)))){
			cout << dados[i].nome << ((62.1*dados[i].altura)-44.7)-(dados[i].peso) << endl;
		}
	}	
	
	return 0;
}
