#include <iostream>
#include <vector>
using namespace std;

struct evento{
	string tipo;
	int jugador;
	
};

vector<int> resumen_partido(const vector<evento>&v, int jugador){
	vector<int> aux(5);
	int cant1;
	int cant2;
	int cant3;
	int cant4;
	int cant5;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].jugador==jugador){
			if(v[i].tipo=="ace"){
				cant1++;
				aux[0]=cant1;
			}if(v[i].tipo=="error no forzado"){
				cant2++;
				aux[1]=cant2;
			}if(v[i].tipo=="Tiro ganador"){
				cant3++;
				aux[2]=cant3;
			}if(v[i].tipo=="Doble falta"){
				cant4++;
				aux[3]=cant4;
			}if(v[i].tipo=="quiebre"){
				cant5++;
				aux[4]=cant5;
			}
		}
	} return aux;
}

int main() {
	
	vector<evento>v;
	
	int jugador;
	cin>>jugador;
	while (jugador!=-1){
		v.resize(v.size()+1);
		v[v.size()-1].jugador;
		string tipo;
		cin>>tipo;
		v[v.size()-1].tipo;
		cin>>jugador;
	}
	
	int un_jugador;
	cin>>un_jugador;
	vector<int> finall= resumen_partido(v, un_jugador);
	for(size_t i=0;i<finall.size();i++) { 
		cout<<finall[i];
	}
	
	
	return 0;
}

