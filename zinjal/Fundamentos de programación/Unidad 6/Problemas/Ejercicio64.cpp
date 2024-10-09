#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombre;
	cout<< "Escriba su nombre"<<endl;
	getline(cin, nombre);
	cout<< "Hola " << nombre << "!";
	
	return 0;
}

