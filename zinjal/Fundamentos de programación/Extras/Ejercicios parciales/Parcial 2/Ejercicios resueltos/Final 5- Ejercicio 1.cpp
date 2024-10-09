#include <iostream>
#include <vector>
using namespace std;

struct paciente {
	string ape_nom;
	int dni;
	string os;
	int fecha_nac;
};

int edad(int fecha_nac) {
	return (20240624-fecha_nac)/10000;
}

int bajo_45(const vector<paciente> &v) {
	int cant = 0;
	for(size_t i=0;i<v.size();i++) { 
		if(edad(v[i].fecha_nac)<45){
			cant++;
		}
	}
	return cant;
}

int buscar (vector<paciente>&v, paciente nuevo){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].dni==nuevo.dni){
			return i;
		}
	}return -1;
}

void agrega_inicio (vector<paciente>&v, paciente nuevo){
	int busca= buscar(v,nuevo);
	if(busca==-1){
		v.resize(v.size()+1);
		for(size_t i=v.size();i>0;i--) {
			v[i]=v[i-1];
		} v[0]=nuevo;
	}
}
	
vector<paciente> lista_os (vector<paciente>&v, string obras){
	vector<paciente>aux;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].os==obras){
			aux.resize(aux.size()+1);
			aux[i]=v[i];
		}
	} return aux;
}

int main() {
	
	int n;
	cin>>n;
	vector<paciente>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].ape_nom;
		cin>>v[i].dni;
		cin>>v[i].os;
		cin>>v[i].fecha_nac;
	}
	
	int menor_45= bajo_45(v);
	cout<<menor_45;
	
	paciente nuevo;
	cin>>nuevo.ape_nom;
	cin>>nuevo.dni;
	cin>>nuevo.os;
	cin>>nuevo.fecha_nac;
	
	agrega_inicio(v,nuevo);
	
	string obras;
	cin>>obras;
	vector<paciente> aux= lista_os(v, obras);
	for(size_t i=0;i<aux.size();i++) { 
		cout<<aux[i].ape_nom<<endl;
	}
	
	return 0;
}

