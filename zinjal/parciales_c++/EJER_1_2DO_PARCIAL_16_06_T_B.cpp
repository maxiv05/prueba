#include <iostream>
#include <vector>
using namespace std;
struct equipoF1 {
	string nombredelequipo;
	string nombreptitular;
	string nombreptitular2;
	string pilotodereserva;
};
bool sustituirpiloto(vector<equipoF1> &v,string nombre) {
	for(size_t i=0; i<v.size(); i++) {
		if(v[i].nombreptitular==nombre) {
			string aux=v[i].pilotodereserva;
			v[i].pilotodereserva=v[i].nombreptitular;
			v[i].nombreptitular=aux;
			return true;
		}
	}
	return false;
} 
int main() {
	vector<equipoF1> v;
	for(size_t i=0; i<v.size();i++) {
		cin >> v[i].nombredelequipo >> v[i].nombreptitular >> v[i].nombreptitular2 >> v[i].pilotodereserva;
	}
	string nombre;
	cin >> nombre;
	if(sustituirpiloto(v,nombre)) {
		for (size_t i=0; i<v.size(); i++) {
			cout << "El equipo " << i << " es: " << v[i].nombredelequipo << " con los pilotos ";
			cout << v[i].nombreptitular << " como piloto titular 1, " << v[i].nombreptitular2 << " como piloto titular 2 y ";
			cout << v[i].pilotodereserva << "como piloto de reserva." << endl;
		}
	} else{
		cout << "No encontrado." << endl;
	}
	
	return 0;
}

