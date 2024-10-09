#include <iostream>
using namespace std;
int pot(int b,int e) {
	if (e==0) {
		return 1;
	} else{
		if (e%2==0) {
			int x=pot(b,e/2);
			return x*x;
		} else{
			return b*pot(b,e-1);
			
		}
	}
}
int main() {
	int b,e;
	cout << "Ingrese la base y el exponente:" << endl;
	cin >> b >> e;
	int r=pot(b,e);
	cout << "El resultado de elevar"<< " " << b << " " << "a la" << " " << e << " " << "es:" << " " << r << endl;
	
	
	return 0;
}

