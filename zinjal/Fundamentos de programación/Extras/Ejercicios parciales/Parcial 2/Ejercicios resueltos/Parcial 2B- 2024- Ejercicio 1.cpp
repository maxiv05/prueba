#include <iostream>
#include <vector>
using namespace std;

struct maquina{
	string juego;
	float precio;
	int maypunt;
	string mayjug;
};

struct tarjeta{
	int numero;
	string nombre;
	float saldo;
	int creditos;
	int fecha;
};


bool comenzarjuego (vector<maquina>&m, vector<tarjeta>&t, int num, string jueg, int hoy){
	for(size_t i=0;i<t.size();i++) { 
		if(t[i].numero==num){
			for(size_t j=0;j<m.size();j++) { 
				if(m[j].juego==jueg){
					if(t[i].saldo>m[j].precio){
						t[i].fecha=20240620;
						return true;
					}
				}
			}
		}
	}return false;
}


void finalizarjuego(vector<maquina>&m, vector<tarjeta>&t, int num, string jueg, int puntaje, int credi){
	for(size_t i=0;i<t.size();i++) { 
		if(t[i].numero==num){
			for(size_t j=0;j<m.size();j++) { 
				if(m[j].juego==jueg){
					if(puntaje>m[j].maypunt){
						m[j].maypunt=puntaje;
						m[j].mayjug=t[i].nombre;
						t[i].creditos+=credi;
					}
				}
			}
		}
	}
}


float regarcartarjeta(vector<tarjeta>&t, int num, float monto){
	float total=0;
	for(size_t i=0;i<t.size();i++) { 
		if(t[i].numero==num){
			float sald=t[i].saldo;
			total=sald+monto;
			t[i].saldo=total;
		}
	}return total;
}
	
int fechas (int fecha1, int fecha2){
	int anio= (fecha2-fecha1)/10000;
	return anio;
}

void eliminaraux(vector<tarjeta>&t, int pos){
	for(size_t i=pos+1; i<t.size();i++) { 
		t[i-1]=t[i];
	}t.resize(t.size()-1);
}
	
void eliminartarjeta(vector<tarjeta>&t, int fecha){
	int pos;
	for(size_t i=0;i<t.size();i++) { 
		if (fechas(v[i].fecha, 20240623)<2){
			pos=i;
			eliminaraux(v,pos);
		}
	}
}
	
int main() {
	
	return 0;
}

