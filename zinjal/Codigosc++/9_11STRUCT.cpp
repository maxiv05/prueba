#include <iostream>
#include <vector>
using namespace std;

int main() {
	struct  ficha_alumno{
		string nombre;
		int edad;
		string ape;
		string DNI;
		string localidad;
		string residencia;
		string direccion;
		string carrera;
		int promedio;
		int legajo;
		vector<int> v;
	};
	ficha_alumno x;
	ficha_alumno y;
	ficha_alumno k;
	x.v.resize(32);
	x.v[5]=8;
	x.v[10]=7;
	x.v[11]=10;
	
//	cin.ignore();
//	getline(cin,x.nombre);
//	cout << x.nombre;
	return 0;
}


