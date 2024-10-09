#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float radio, perimetro, area;
	
	cout<<"Ingrese el radio del circulo"<< endl;
	cin>> radio;
	
	perimetro= 2*3.1415*radio;
	area= 3.1415* pow(radio, 2);
	
	cout<<"El perimetro es "<< perimetro<< endl;
	cout<<"El area es "<<area; 
	
	return 0;
}

