#include <iostream>
using namespace std;

void intercambio(int &a, int &b){
	int aux=a; a=b; b=aux;
}
void intercambia(string &a, string &b){
	string aux=a; a=b; b=aux;
}

int main(int argc, char *argv[]) {
	int num1, num2;
	cout<<"Ingrese dos valores para intercambiarlos"<<endl;
	cin>>num1>>num2;
	
	intercambio(num1, num2);
	
	cout<<"Los valores intercambiados son "<<num1<<" "<<num2<<endl;
	
	string palabra1, palabra2;
	cout<<"Ingrese dos palabras para intercambiarlos"<<endl;
	cin>>palabra1>>palabra2;
	
	intercambia(palabra1, palabra2);
	
	cout<<"Las palabras intercambiadas son "<<palabra1<<" "<<palabra2;
	
	return 0;
}

