#include <iostream>
#include <fstream>
using namespace std;

int main(){
int N;
ifstream arqA("matriz.txt");
if(arqA){
	arqA >> N;
float matriz[N][N];
for(int i=0; i<N ; i++){
	for(int j=0; j<N ; j++){
		arqA >> matriz[i][j];
	}
}
int cont=0;
for(int i=0; i<N ; i++){
	for(int j=0; j<N ; j++){
		if((matriz[i][j]==matriz[j][i]) and (i!=j)){
			cont++;
		}	
}
}
if(cont==((N*N)-N)){
	cout << "simetrica" << endl;
}
else{
	cout << "nao simetrica" << endl;
}
}
return 0;
}
