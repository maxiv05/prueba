#include <iostream>
#include <vector>
#include <matrix>
using namespace std;

int main() {
	matrix<int>elecciones(15,9,0);
	vector<string>candidato(9);
	int canthabilitados,codcand,votos,codbarrio;
	
	cout<<"digite cantidad de votantes habilitados";cin>>canthabilitados;
	for(int i=0;i<9;i++){
		cout<<"ingrese el codigo del candidato : ";cin>>codcand;
		cout<<"ingrese el nombre del candidato: ";cin>>candidato[codcand-1];
	}
	///carga de datos
	int totaldevotos=0;
	for(int i =0;i<232;i++){
		cout<<"digite el codigo del barrio";cin>>codbarrio	;
		for(int j=0;j<9;j++){
			cout<<"votos del candidato"<<j+1<<" : ";cin>>votos;
			elecciones[codbarrio-1][j]+= votos;
			totaldevotos+=votos;
		}
	}
	float porc= 100/canthabilitados*totaldevotos;
	cout<<"porcentaje asistencias"<<porc<<"%"<<endl;
	
	int mayor = 0 ;
	int candmay= 0;
	
	for(int i=0;i<9;i++){
		int suma=0;
		for(int j=0;j<15;j++){
			
			suma+=elecciones[j][i];
			
		}
		if(suma> mayor){
			mayor= suma; candmay=i;
		}
		
	}
	cout<<"el ganador fue"<<candidato[candmay]<<"con"<<mayor<<"votos"<<endl;
	
	cout<<"ingrese barrio";cin>>codbarrio;
	int codganabarrio;
	mayor=0;
	for(int i=0;i<9;i++){
		if(elecciones[codbarrio-1][i]>mayor){
			mayor=elecciones[codbarrio-1][i];
			codganabarrio=i;
		}
	
	}
	if(codganabarrio==candmay){
		cout<<candidato[candmay]<<"gano en el barrio"<<codbarrio+1<<endl;
	}else {cout<<candidato[candmay]<<"NO gano en el barrio"<<codbarrio+1<<endl;}
	
	

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

