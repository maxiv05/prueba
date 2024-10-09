#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cin >> num;
	if (num % 2==0) {
		 cout << "Es par.";
	} else {
		cout << "Es impar.";
	}
	if (num % 3==0 and num % 5==0) {
		cout << "Es múltiplo de 3 y de 5 a la vez.";
	}
	else { 
		cout << "No es múltiplo de 3 y de 5 a la vez.";
	}
	return 0;
	}




