#include <iostream>
using namespace std;

int potencia(int n, int b){
	if (b==1){
		return n;
	}
	return n*potencia(n,b-1);
}

int main() {
	
	int num1, num2;
	cout<<"Ingrese los números"<<endl;
	cin>>num1>>num2;
	int resultado= potencia(num1, num2);
	
	cout<<"El resultado es "<<resultado;
	
	return 0;
}

