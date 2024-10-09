#include <iostream>
#include <matrix>
using namespace std;

int main() {
	
	matrix<int>alumnos(200,35,0);
	int nota;
	cin>>nota;
	while(nota!=0){
		int num;
		cin>>num;
		int materia;
		cin>>materia;
		alumnos[num][materia]=nota;
		cin>>nota;
	}
	
	int suma;
	float promedio;
	int mayor_prom=0;
	int menor_prom=999999;
	int mas_dificil;
	int prom_mas_dificil=0;
	
	for(size_t i=0;i<alumnos.size(0);i++) { 
		suma=0;
		for(size_t j=0;j<alumnos.size(1);j++) { 
			suma+=alumnos[i][j];
		}
		promedio=suma/35;
		if(promedio>mayor_prom){
			mayor_prom=promedio;
		}
	}
	
	for(size_t i=0;i<alumnos.size(1);i++) { 
		suma=0;
		for(size_t j=0;j<alumnos.size(0);j++) { 
			suma+=alumnos[j][i];
		}
		promedio=suma/200;
		if(promedio<menor_prom){
			menor_prom=promedio;
			mas_dificil=c;
		}
	}
	
	cout<<menor_prom<<mas_dificil;
	
	for(size_t i=0;i<alumnos.size(0);i++) { 
		if(alumnos[i][mas_dificil]>prom_mas_dificil){
			prom_mas_dificil=alumnos[i][mas_dificil];
		}
	}
	
	cout<<prom_mas_dificil;
	
	return 0;
}

