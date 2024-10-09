#include <iostream>
using namespace std;

void intercambia(int &x, int &y){
	int aux = x; x = y; y = aux;
} 

int main(int argc, char *argv[]) {
	int a,b;
	cout << "Escriba los dos datos" << endl;
	cin >> a >> b;
	intercambia (a,b);
	cout << a << " " << b << endl;
	return 0;
}

