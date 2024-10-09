#include <iostream>
#include <cmath>
#include <vector>
#include <matrix>
using namespace std;

struct ministerio{
	float saldo;
	float gasto;
};

int calcular_mes (int fecha){
	int primero= fecha%10000;
	int mes=floor(primero/100);
	return mes;
}

int main() {
	
	vector<float> v(10);
	
	int codigo;
	cin>>codigo;
	while(codigo!=-1){
		int monto;
		cin>>monto;
		v[codigo-1]= monto;
	}
	
	matrix<ministerio>m (10,12,0);
	
	int cod;
	cin>>cod;
	while(cod!=0){
		float mont;
		cin>>mont;
		int fecha;
		cin>>fecha;
		int mes=calcular_mes(fecha);
		m[cod-1][mes-1].saldo+=mont;
		m[cod-1][mes-1].gasto+=mont;
		cin>>cod;
	}
	
	for(size_t i=0;i<m.size(0);i++) { 
		m[i][0].saldo=v[i];
		for(size_t j=1;j<m.size(1);j++) {
			m[i][j]-=m[i][j-1];
		}
	}
	
	return 0;
}

