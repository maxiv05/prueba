#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Todos los caracteres del código ASCII:" << endl;
	for(char i = 0; i < 256; i++) {
		cout << i << " ";
	}
	cout << endl << endl;
	
	cout << "Sólo las letras del abecedario en mayúsculas:" << endl;
	for(char c = 'A'; c <= 'Z'; c++) {
		cout << c << " ";
	}
	cout << endl << endl;
	
	cout << "Sólo las letras del abecedario en minúsculas:" << endl;
	for(char c = 'a'; c <= 'z'; c++) {
		cout << c << " ";
	}
	cout << endl;
	return 0;
}



