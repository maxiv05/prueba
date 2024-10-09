#include <iostream>
#include <vector>
#include <matrix>
using namespace std;

int main() {
	
	int habitantes;
	cin>>habitantes;
	vector<string>candidatos(9);
	for(size_t i=0;i<candidatos.size();i++) { 
		cin>>candidatos[i];
	}
	
	matrix<int> elecciones(15,9,0);
	
	int total=0;
	
	for(int i=0;i<232;i++) { 
		int codigo;
		cin>>codigo;
		for(int j=0;j<9;j++) { 
			int votos;
			cin>>votos;
			elecciones[codigo][j]=votos;
			total+=votos;
		}
	}
	
	float porcentaje= 100/total*habitantes;
	cout<<porcentaje;
	
	int mayor=0;
	int candmay;
	for(int i=0;i<9;i++) { 
		int suma=0;
		for(int j=0;j<15;j++) { 
			suma+=elecciones[j][i];
		}
		if(suma>mayor){
			mayor=suma;
			candmay=i;
		}
	}
	
	cout<<candmay;
	
	int codigo;
	cin>>codigo;
	int may=0;
	int codbarrio;
	
	for(int i=0;i<9;i++) { 
		if(elecciones[codigo-1][i] > may){
			mayor = elecciones[codigo-1][i];
			codbarrio=i;
		}
	}
	if(codbarrio==candmay){
		cout<<candidatos[candmay]<<" ganó en el barrio "<<codigo+1<<endl;}
	else{
		cout<<candidatos[candmay]<<" NO ganó en el barrio "<<codigo+1<<endl;
	}
	
	
	return 0;
}

