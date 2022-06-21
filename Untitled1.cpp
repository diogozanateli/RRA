#include <iostream>
using namespace std;
struct carro{
	string nome;
	int ano;
	int preco;
};
int main (){
	int quant;
	cin >> quant;
	carro meucarro[quant];
	for (int i = 0; i < quant; i++)
	{
		cin >> meucarro[i].nome >> meucarro[i].ano >> meucarro[i].preco;
	}
	int ref;
	cin >> ref;
	for (int i = 0; i < quant; i++)
	{
		if(meucarro[i].preco<ref){
			cout << meucarro[i].nome << " " << meucarro[i].ano << " " << meucarro[i].preco << endl;
		}
	}
	
	return 0;
}

