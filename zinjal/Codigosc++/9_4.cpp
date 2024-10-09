#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> A;
	vector<string> F;
	int nota;
	string nombre;
	cout << "Escriba el nombre y la nota del alumno (calificación 0 para finalizar):" << endl;
	cin >> nombre;
	cin >> nota;
	while(nota!=0) {
		if (nota>=6){
			A.push_back(nombre);
		} else{
			F.push_back(nombre);
		}
		cout << "Escriba el nombre y la nota del alumno (calificación 0 para finalizar):" << endl;
		cin >> nombre >> nota;
	}
	cout << "Aprobaron:" << endl;
	for (size_t i=0; i<A.size(); i++){
		cout << A[i] << endl;
	}
	cout << "Desprobaron:" << endl;
	for (size_t i=0; i<F.size(); i++){
		cout << F[i] << endl;
	}
	
	return 0;
}


