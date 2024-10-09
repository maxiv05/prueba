#include <iostream>
using namespace std;

struct pais{
	string nombre;
	int anio;
	int poblacion;
};

int buscar(vector<pais>&v, int ani){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].anio==2000){
			return i;
		}
	}return -1;
}

void eliminar(vector<pais>&v, int pos){
	for(size_t i=0;i<v.size();i++) { 
		v[i-1]=v[i];
	}v.resize(v.size()-1);
}
	
pais crecim_demograf (vector<pais>&v){
	for(size_t i=0;i<v.size();i++) { 
		int pos=buscar(v, v[i].anio);
		eliminar(v, pos);
	}
	
	vector<pais>p;
	pais mayor={"",0,0};
	for(size_t j=0;j<v.size();j++) { 
		pais crecim=(v[j].poblacion)*100;
	}if (crecim>mayor){
		mayor=crecim;
	}
	return mayor;
}

int main() {
	
	return 0;
}

