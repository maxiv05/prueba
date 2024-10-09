#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cout << n << endl;
	cout << "Valor N:";
	cin >> n;
	int parmenoran;
	string opcion;
	cout << "Creciente o decreciente.";
	cin >> opcion;
	if (opcion=="decreciente"){
		parmenoran=n;
		while (parmenoran!=1) {
			parmenoran=parmenoran-1;
			if (parmenoran%2==0) {
				cout << parmenoran << endl;
			}
		}
		
	}
	else {
		parmenoran=1;
		while (parmenoran!=n) {
			parmenoran=parmenoran+1;
			if (parmenoran%2==0) {
				cout << parmenoran << endl;
			}
		}
	}
	return 0;
}

