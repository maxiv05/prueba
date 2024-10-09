#include <iostream>
using namespace std;
struct notas {
	string apellido;
	string nombre;
	float primerparcial;
	float recprimer;
	float segundparcial;
	float segrec;
};
struct resfinal{
	string apellido;
	string nombre;
	string condicion;
	float nota;
};
resfinal condi(notas x){
	int nulo=-1;
	resfinal cond;
	int sumaparciales=0;
	if(x.primerparcial!=nulo){
		sumaparciales=x.primerparcial+sumaparciales;
	}
	if(x.recprimer!=nulo and x.recprimer>x.primerparcial){
		sumaparciales=(sumaparciales-x.primerparcial)+x.recprimer;
	}
	if(x.segundparcial!=nulo){
		sumaparciales=sumaparciales+x.segundparcial;
	}
	if(x.segrec!=nulo and x.segrec>x.segundparcial){
		sumaparciales=(sumaparciales-x.segundparcial)+x.segrec;
	}
	int prom=sumaparciales/2;
	if (prom>=7){
		cond.condicion="promocion";
		cond.nota=prom;
		return cond;
	} else{
		if (prom>=4){
			cond.condicion="regular";
			cond.nota=-1;
			return cond;
		} else{
			cond.condicion="libre";
			cond.nota=-1;
			return cond;
		}
	}
}
int main() {
	notas x;
	cout << "Ingrese los resultados del: " << endl;
	cout << "Primer parcial: " << endl;
	cin >> x.primerparcial;
	cout << "Recuperatorio 1: " << endl;
	cin >> x.recprimer;
	cout << "Segundo parcial: " << endl;
	cin >> x.segundparcial;
	cout << "Recuperatorio 2: " << endl;
	cin >> x.segrec;
	resfinal cond = condi(x);
	cout << "El alumno está en la condición de: " << cond.condicion;
	if (cond.condicion=="promocion") 
		cout << "con el promedio de: " << cond.nota << endl;
	return 0;
}

