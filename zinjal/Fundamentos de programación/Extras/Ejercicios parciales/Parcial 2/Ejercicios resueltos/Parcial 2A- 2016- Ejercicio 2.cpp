#include <iostream>
#include <vector>
using namespace std;

struct datos{
	int codigo;
	int dni;
	string nombre;
	int nota;
};

void carga(vector<datos>&v){
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].codigo;
		cin>>v[i].dni;
		cin>>v[i].nombre;
		cin>>v[i].nota;
	}
}
	
datos correspondiente (vector<datos>&v, int cod){
	datos alumno;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].codigo==cod){
			alumno=v[i];
		}
	} return alumno;
}

int main() {
	
	vector<datos>v(30);
	carga(v);
	
	int cod;
	cin>>cod;
	
	datos elegido= correspondiente(v, cod);
	cout<<elegido.codigo;
	cout<<elegido.nombre;
	cout<<elegido.dni;
	cout<<elegido.nota;
	
	return 0;
}

