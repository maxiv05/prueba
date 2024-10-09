#include <iostream>
#include <vector>
using namespace std;

struct ficha_alumno{
	int dni;
	int matricula;
	string nombre;
	string apellido;
	int curso;
	char division;
	string direccion;
	vector<int>materias;
	string mail;
	int ingreso;
};

int main() {
	
	ficha_alumno alum1;
	ficha_alumno alum2;
	ficha_alumno alum3;
	
	alum1.materias.resize(32);
	alum2.materias.resize(32);
	alum3.materias.resize(32);
	
	alum1.materias[5]=8;
	alum1.materias[10]=7;
	alum1.materias[11]=10;
	
	alum2.materias[5]=8;
	alum2.materias[10]=7;
	alum2.materias[11]=10;
	
	alum3.materias[5]=8;
	alum3.materias[10]=7;
	alum3.materias[11]=10;
	
	return 0;
}

