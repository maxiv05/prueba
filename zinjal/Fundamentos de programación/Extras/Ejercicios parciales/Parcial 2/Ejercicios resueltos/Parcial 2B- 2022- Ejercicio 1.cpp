#include <iostream>
#include <matrix>
using namespace std;

vector<int> mayprobl (const matrix<float>&m){
	vector<int>aux(24);
	int contador=0;
	for(int i=0;i<24;i++) { 
		for(int j=0;j<7;j++) { 
			contador++;
			aux[i]=contador;
		}
	}
	return aux;
}

vector<float>tiempo (const matrix<float>&m){
	vector<float> auxiliar(24);
	int sumador=0;
	for(int i=0;i<24;i++) { 
		for(int j=0;j<7;j++) { 
			sumador+=m[i][j];
			auxiliar[i]=sumador;
		}
	} 
	return auxiliar;
}

pair<int,int> ganadores (vector<int>&mayorproblema, vector<float>&min){
	int mayor=0;
	float minutos=0;
	int mayor2=0;
	float minutos2=0;
	
	for(int i=0;i<24;i++) { 
		if(mayorproblema[i]>mayor or (mayorproblema[i]==mayor and min[i]>minutos)){
			mayor2=mayor;
			minutos2=minutos;
			mayor=mayorproblema[i];
			minutos=min[i];
		}else if (mayorproblema[i]>mayor2 or (mayorproblema[i]==mayor2 and min[i]>minutos2)){
			mayor2= mayorproblema[i];
			minutos2=min[i];
		}
	} return {mayor, mayor2};
}
	
int problema (vector<float>&min){
	float mayor=0;
	int problema;
	for(int i=0;i<24;i++) { 
		if(min[i]>mayor){
			mayor=min[i];
			problema=i;
		}
	} return problema;
}
	
	
int main() {
	
	matrix<float>m(24,7,0);
	int universidad;
	cin>>universidad;
	while(universidad!=0){
		int problema;
		cin>>problema;
		float minutos;
		cin>>minutos;
		m[universidad][problema]=minutos;
	}
	
	vector<int> mayorproblema= mayprobl(m);
	vector<float> min= tiempo(m);
	
	pair<int, int> ganaron= ganadores(mayorproblema, min);
	cout<<ganaron.first<<endl;
	cout<<ganaron.second<<endl;
	
	int dificil= problema(min);
	cout<<dificil+1;
	
	return 0;
}

