#include <iostream>
using namespace std;
int mayores_3(int valor_1, int valor_2, int valor_3=-99999) {
	if (valor_1>valor_2 and valor_1>valor_3) {
		 return valor_1;
	} else{
		if (valor_2>valor_3) {
			return valor_2;
		} else {
			return valor_3;
		}
	}
}
int main(int argc, char *argv[]) {
	bool parametro;
	int valor_1;
	int valor_2;
	int valor_3;
	cout << "Escriba los 3 valores";
	cin >> valor_1 >> valor_2 >> valor_3;
	
	cout << "El mayor de los 2 primeros es: " << mayores_3(valor_1,valor_2) << endl;
	cout << "El mayor de los 3 es: " << mayores_3(valor_1,valor_2,valor_3) << endl;
    
	return 0;
}

