#include <iostream>
#include <vector>
using namespace std;

struct jugador{
	string nombre;
	int cantidad_partidas;
	int puntaje_max;
};

pair<int, bool> registrar_partida (vector<jugador>&v, string nom, int puntaje){
	int pos;
	bool actualiza=false;
	for(size_t i=0;i<v.size();i++) {
		if(v[i].nombre==nom){
			pos=i;
			v[i].cantidad_partidas++;
			if(puntaje>v[i].puntaje_max){
				v[i].puntaje_max=puntaje;
				actualiza=true;
			}
		}else {
			jugador nuevo;
			v.push_back(nuevo);
		}
	} return {pos, actualiza};
}

int main() {
	
	int n;
	vector<jugador>v;
	cin>>n;
	for(size_t i=0;i<n;i++) { 
		cin>>v[i].nombre;
		cin>>v[i].puntaje_max;
	}
	
	jugador mayor={"",0,0};
	for(size_t i=0;i<v.size();i++) { 
		registrar_partida(v,v[i].nombre, v[i].puntaje_max);
		if(v[i].puntaje_max>mayor.puntaje_max or (v[i].puntaje_max==mayor.puntaje_max and v[i].cantidad_partidas<mayor.cantidad_partidas)){
			mayor=v[i];
		}
	}
	cout<<mayor.nombre;
	
	
	
	return 0;
}

