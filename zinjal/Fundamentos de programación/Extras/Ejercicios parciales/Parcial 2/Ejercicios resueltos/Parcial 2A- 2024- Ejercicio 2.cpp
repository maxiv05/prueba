#include <iostream>
#include <vector>
#include <matrix>
using namespace std;


vector<int> mayoresgastos(const matrix<float>&m){
	vector<int>aux;
	for(size_t i=1;i<12;i++) {
		int contador=0;
		for(int j=0;j<10;j++) { 
			if(m[j][i]>m[j][i-1]){
				contador++;
			}
		} aux.push_back(contador);
	}
	return aux; 
}

pair<float, int> maygasto(const matrix <float>&m, int hospital){
	float mayor=0;
	int mes;
	for(int i=0;i<12;i++) { 
		if(m[hospital][i]>mayor){
			mayor=m[hospital][i];
			mes=i;
		}
	} return{mayor, mes};
}
	
	
int main() {
	
	vector<float>presupuesto(10);
	for(size_t i=0;i<presupuesto.size();i++) { 
		float ingreso;
		int codigo;
		cin>>ingreso;
		cin>>codigo;
		presupuesto[codigo-1]=ingreso;
	}
	
	matrix<float> m(10,12,0);
	int codigo;
	cin>>codigo;
	while(codigo!=0){
		int dia;
		cin>>dia;
		int mes;
		cin>>mes;
		float gastos;
		cin>>gastos;
		m[codigo-1][mes-1]+=gastos;
		cin>> codigo;
	}
	
	for(size_t i=0; i<10; i++) {
		float suma=0;
		for(size_t j=0; j<12; j++) {
			suma+=m[i][j];
		}
		if(suma>presupuesto[i]){
			cout<<i+1;
		}
	}
	
	vector<int> auxiliar= mayoresgastos(m);
	for(size_t i=0;i<auxiliar.size();i++) { 
		cout<<auxiliar[i];
	}
	
	int hospital;
	cin>>hospital;
	pair<float,int> hos= maygasto(m, hospital);
	cout<<hos.first;
	cout<<hos.second+1;
	
	return 0;
}

