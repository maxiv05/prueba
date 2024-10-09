#include <iostream>
#include <matrix>
#include <vector>
using namespace std;

pair<int, float> ganador(const matrix<int>&elecciones, int total){
	int mayor=0;
	int maycand;
	float promedio=0;
	for(size_t i=0;i<7;i++) {
		int suma=0;
		for(int j=0;j<18;j++) { 
			suma+=elecciones[j][i];
		}
		if(suma>mayor){
			promedio=suma/total;
			mayor=suma;
			maycand=i;
			
		}
	}
	return {maycand, promedio};
}

int mayvotosbl (matrix<int>&elecciones){
	int mayor=0;
	int codmay;
	for(int j=0;j<18;j++) { 
		for(int i=7;i<8;i++) {  
			mayor=elecciones[j][i];
			codmay=j;
		}
	} return codmay;
}
	
int main() {
	
	vector<string> candidatos(7);
	int nombre;
	for(size_t i=0;i<candidatos.size();i++) { 
		cin>>nombre;
	}
	
	matrix<int> elecciones(18,8,0);
	
	int codigo;
	int total;
	int votos;
	for(int i=0;i<145;i++) { 
		cin>>codigo;
		int votosbl;
		cin>>votosbl;
		elecciones[codigo][8]=votosbl;
		for(int j=0;j<7;j++) { 
			cin>>votos;
			elecciones[codigo][j]=votos;
			elecciones[codigo][j]+=votos;
		}
		total=total+votos+ votosbl;
	}
	
	pair<int, float> candganador= ganador(elecciones,total);
	cout<<candganador.first<<endl;
	cout<<candganador.second<<endl;
	
	for(size_t i=0;i<candidatos.size();i++) { 
		if(i==candganador.second){
			cout<<candidatos[i]<<endl;
		}
	}
	
	int porcentaje=0;
	int sumador=0;
	for(int i=0;i<7;i++) { 
		for(int j=0;j<18;j++) { 
			sumador+=elecciones[j][i];
		}
		porcentaje=sumador/total;
		cout<<porcentaje<<endl;
	}
	
	int barrioblanco= mayvotosbl (elecciones);
	cout<<barrioblanco;
	
	return 0;
}

