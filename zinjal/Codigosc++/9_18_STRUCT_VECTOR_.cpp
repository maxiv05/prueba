#include <iostream>
#include <vector>
using namespace std;
struct paciente {
	string nombre;
	int DNI;
	string diagnostico;
	int numhabit;
};
int buscarfulanito(vector<paciente> v) {
	for (size_t i=0; i<v.size(); i++) {
		if (v[i].nombre=="fulanito") {
			int x=v[i].numhabit;
			return x;
		}
	}
	return -1;
}
int apendicitis(vector<paciente> v) {
	int contador=0;
	for (size_t i=0; i<v.size(); i++) {
		if (v[i].diagnostico=="apendicitis") {
			contador++;
		}
	}
	return contador;
} 
int num_101(vector<paciente> v) {
	for (size_t i=0; i<v.size(); i++) {
		if (v[i].numhabit==101) {
			return i;
		}
	}
	return -1;
}
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	vector<paciente> v(n);
	cout << "Ingrese los siguientes datos: " << endl;
	for(size_t i=0; i<v.size(); i++) {
		cout << "Nombre: ";
		cin >> v[i].nombre;
		cout << endl;
		cout << "DNI: ";
		cin >> v[i].DNI;
		cout << endl;
		cout << "Diagnóstico: " << endl;
		cin >> v[i].diagnostico;
		cout << "Número de habitación: ";
		cin >> v[i].numhabit;
	}
	int x=buscarfulanito(v);
	if (buscarfulanito(v)!=-1) {
		cout << "Fulanito está en la habitación: " << x << endl;
	}
	int nump_A=num_101(v);
	if (nump_A!=-1) {
	cout << "Número de pacientes con apedicitis: " << nump_A << endl;
	int l=apendicitis(v);
	cout << "Los datos del paciente en la habitación 101: ";
	cout << "Nombre: " << v[l].nombre << endl;
	cout << "DNI: " <<  v[l].DNI << endl;
	cout << "Diagnóstico:  "<<  v[l].diagnostico << endl;
	} else{
		cout << "No hay ningún paciente en la habitación 101. " << endl;
	}
		
	return 0;
}

