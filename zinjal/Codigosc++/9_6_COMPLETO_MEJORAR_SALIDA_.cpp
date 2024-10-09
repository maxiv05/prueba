#include <iostream>
#include <vector>
using namespace std;

int main() {
	int dia;
	vector<int> dinero(12,0);
	cout << "Ingrese el dia" << endl;
	cin >> dia;
	cout << "Ingrese el mes" << endl;
	int mes;
	cin >> mes;
	cout << "Ingrese el monto" << endl;
	int monto;
	cin >> monto;
	while (monto!=0) {
		dinero[mes]=dinero[mes]+monto;
		cout << "Ingrese el mes" << endl;
		cin >> mes;
		cout << "Ingrese el dia" << endl;
		cin >> dia;
		cout << "Ingrese el monto" << endl;
		cin >> monto;
	}
	for (size_t i=0; i<dinero.size()-1; i++) {
		cout << "El dinero recaudado del mes: " << i <<" es: " << dinero[i] << endl;
	}
	int menor=999999;
	int mesmenor=0;
	for (size_t i=0; i<dinero.size(); i++) {
		if (dinero[i] < menor) {
			menor =dinero[i];
			mesmenor=i;
		}
	}
	///MEJORAR///LA///SALIDA///DE///LOS///MESES////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "El mes con menor recaudación fue el: " << mesmenor << endl;
	return 0;
}

