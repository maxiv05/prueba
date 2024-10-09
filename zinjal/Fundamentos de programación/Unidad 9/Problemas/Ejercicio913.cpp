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
	
	vector<ficha_alumno> v(200);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].dni;
		cin>>v[i].matricula;
		cin>>v[i].nombre;
		cin>>v[i].apellido;
		cin>>v[i].curso;
		cin>>v[i].division;
		cin>>v[i].direccion;
		vector<int>materias;
		for(size_t i=0;i<materias.size();i++) { 
			cin>>materias[i];
			materias.push_back(i);
		}
		cin>>v[i].mail;
		cin>>v[i].ingreso;
	}
	
	
	return 0;
}

