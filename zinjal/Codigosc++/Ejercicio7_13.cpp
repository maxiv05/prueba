#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x;
	cout << "Escriba el costo por hora." << endl;
	cin >> x;
	int salariocorrespondiente;
	salariocorrespondiente=0;
	int salariomayor=0;
	int salariomenor=999999999;
	int suma=0;
	float prom;
	int numhoras;
	for (int i=0; i<25; ++i) {
		cout << "Numero de horas trabajadas por el empleado" << i << endl;
		cin >> numhoras;
		salariocorrespondiente=numhoras*x;
		cout << "El salario que le corresponde al empleado" << i << "es de:" << salariocorrespondiente;
		if (salariocorrespondiente>salariomayor){
			salariomayor=salariocorrespondiente;
		}
		if (salariocorrespondiente<salariomenor){
			salariomenor=salariocorrespondiente;
		}
	    suma=salariocorrespondiente+suma;
	}
	cout << suma;
	prom=suma/25;
	cout << prom;
	
	return 0;
}

