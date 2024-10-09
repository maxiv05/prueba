#include <iostream>
#include <vector>
using namespace std;

struct atleta {
	int codigo;
	int dni;
	string nombre;
	int tiempo;
};

void carga(vector<atleta>&v){
	for(size_t i=0; i<v.size(); i++) { 
		cin>>v[i].codigo;
		cin>>v[i].dni;
		cin>>v[i].nombre;
		cin>>v[i].tiempo;
	}
}
	
atleta datos(const vector<atleta>&v, int DNI){
	atleta ingresado;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].dni==DNI){
			ingresado=v[i];
		}
	} return ingresado;
}

int main() {
	
	vector<atleta>v(20);
	carga(v);
	
	int DNI;
	cin>>DNI;
	atleta dtos= datos(v, DNI);
	cout<<dtos.codigo;
	cout<<dtos.dni;
	cout<<dtos.nombre;
	cout<<dtos.tiempo;
	
	return 0;
}

