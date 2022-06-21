#include <iostream>
using namespace std;

int main(){
	float n1, n2, n3, n4;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	if ((n1>n2) and (n1>n3) and (n1>n4)){
		if ((n2>n3) and (n2>n4) and (n2<n1)){
			cout << n1 << endl << n2;
		}
	}
	if ((n1>n2) and (n1>n3) and (n1>n4)){
		if ((n3>n2) and (n3>n4) and (n3<n1)){
			cout << n1 << endl << n3;
		}
	}
		if ((n1>n2) and (n1>n3) and (n1>n4)){
		if ((n4>n2) and (n4>n3) and (n4<n1)){
			cout << n1 << endl << n4;
		}
	}
return 0;
}
