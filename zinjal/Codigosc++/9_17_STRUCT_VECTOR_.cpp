#include <iostream>
#include <vector>
using namespace std;
struct notas {
	string apellido;
	string nombre;
	float primerparcial;
	float recprimer;
	float segundparcial;
	float segrec;
};
struct resfinal {
	string apellido;
	string nombre;
	string condicion;
	float nota;
};

vector<resfinal> condic(vector<notas> v) {
	vector<resfinal> c(v.size());
	for (size_t i=0; i<v.size(); i++) {
		int nulo=-1;
		int sumaparciales=0;
		if(v[i].primerparcial!=nulo){
			sumaparciales=v[i].primerparcial+sumaparciales;
		}
		if(v[i].recprimer!=nulo and v[i].recprimer>v[i].primerparcial){
			sumaparciales=(sumaparciales-v[i].primerparcial)+v[i].recprimer;
		}
		if(v[i].segundparcial!=nulo){
			sumaparciales=sumaparciales+v[i].segundparcial;
		}
		if(v[i].segrec!=nulo and v[i].segrec>v[i].segundparcial){
			sumaparciales=(sumaparciales-v[i].segundparcial)+v[i].segrec;
		}
		int prom=sumaparciales/2;
		if (prom>=7){
			c[i].condicion="promocion";
			c[i].nota=prom;
		} else{
			if (prom>=4){
				c[i].condicion="regular";
				c[i].nota=-1;
			} else{
				c[i].condicion="libre";
				c[i].nota=-1;
			}
		}
	}
	return c; 
}

int main() {
	vector<notas> v(30);
	for(size_t i=0; i<v.size(); i++){
		cout << "Nombre: " << endl;
		cin >> v[i].nombre;
		cout << "Apellido: " << endl;
		cin >> v[i].apellido;
		cout << "Ingrese los resultados del: " << endl;
		cout << "Primer parcial: " << endl;
		cin >> v[i].primerparcial;
		cout << "Recuperatorio 1: " << endl;
		cin >> v[i].recprimer;
		cout << "Segundo parcial: " << endl;
		cin >> v[i].segundparcial;
		cout << "Recuperatorio 2: " << endl;
		cin >> v[i].segrec;
	}
	vector<resfinal> c = condic(v);
	for (size_t i=0; i<v.size(); i++){
		cout << v[i].nombre << " " << v[i].apellido;
		cout << "Condición: " << c[i].condicion;
		if(c[i].condicion=="promocion") {
			cout << "con un promedio de: " << "(" << c[i].nota << ")" << endl;
		}
	}
	return 0;
}

