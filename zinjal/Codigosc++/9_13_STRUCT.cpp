#include <iostream>
#include <vector>
using namespace std;
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
	vector<int> Notas_materias;
};
int main() {
	vector<ficha_alumno> lista(200);
	return 0;
}

