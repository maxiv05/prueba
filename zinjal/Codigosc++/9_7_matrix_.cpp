#include <iostream>
#include <vector>
#include <matrix>
using namespace std;

int main() {
	int N;
	cout << "Ingrese el número de participantes: " << endl;
	cin >> N;
	vector<int> dni(N);
	vector<int> codigo(N);
	cout << "En 1 ingrese el DNI y en 2 ingrese el número asignado para la competencia" << endl;
	for (size_t i=0; i<dni.size(); i++) {
		cout << "1: " << endl;
		cin >> dni[i];
		cout << "2: " << endl;
		cin >> codigo[i-1];
	}
	matrix<int> s(3,N);
	int i=0;
	int numprueba=0;
	int participante=0;
	int dni_mayor=0;
	int dni_menor=0;
	int puntaje_mayor=0;
	int puntaje_menor=0;
	int participante_computacion;
	int puntaje;
	while (participante!=-1){
		cout << "Ingrese el número de prueba, número de participante y su puntaje: " << endl;
		cin >> numprueba; 
		cin >> participante; 
		cin >> puntaje;
		s[numprueba][participante]=puntaje;
		if (puntaje>puntaje_mayor) {
			dni_menor=dni_mayor;
			dni_mayor=dni[participante];
			puntaje_menor=puntaje_mayor;
			puntaje_mayor=puntaje;
			participante_computacion=participante;
		}    	
	}
	cout << "El DNI del ganador es: " << dni_mayor << " con un puntaje de: " << puntaje_mayor << endl;
	cout << "El DNI del segundo puesto es: " << dni_menor << " con un puntaje de: " << puntaje_menor << endl;
	cout << "El puntaje que obtuvo en computación el ganador es: " << endl;
	cout << s[2][participante_computacion] << endl; /// pongo s[2] porque quiero hacer referencia al elemento 3] ¿Qué tan bien esta eso, se puede hacer de otra manera?
	
	return 0;
}

