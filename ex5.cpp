#include <iostream>
using namespace std;
int fun(int n);
int menor(int a, int b, int c);
int fun(int n){
	if(n==1){
		return 1;
	}
	else if (n==2){
		return 2;
	}
	else if (n==3){
		return 3;
	}
	else if(n>3){
		return menor(fun(n-1)+1, fun(n-2)+1, fun(n-3)+1);
	}
	return 0;
}
int menor(int a, int b, int c){
	if (a<=b and a<=c){
		return a;
	}
	else if(b<=a and b<=c){
		return b;
	}
	else{
		return c;
	}
	return 0;
}

int main(){
	int r;
	cin >> r;
	fun(r);
	cout << fun(r) << endl;
	return 0;
}
