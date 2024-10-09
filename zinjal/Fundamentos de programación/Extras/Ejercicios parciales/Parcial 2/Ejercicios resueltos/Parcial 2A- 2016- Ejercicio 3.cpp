#include <iostream>
using namespace std;

int sabermes(int fecha){
	int primero=fecha%1000;
	int mess=floor(primero/100);
	return mess;
}
	
int cantidad (vector<int>&v){
	int contador=0;
	for(int i=4;i<5;i++) { 
		for(int j=0;j<12;j++) { 
			contador+=m[i][j]
		}
	} return contador;
}

int main() {
	
	matrix<int>m(10,12,0);
	
	int cantidad;
	cin>>cantidad;
	while(cantidad!=-1){
		int fecha;
		cin>>fecha;
		int sucursal;
		cin>>sucursal;
		int mes= sabermes(fecha);
		m[sucursal][mes]=cantidad;
		cin>>cantidad;
	}
	
	int pasajes_terminal_5= cantidad(v);
	cout<<pasajes_terminal_5;
	
	int mes;
	cin>>mes;
	int sumador=0;
	for(int i=mes-1; i<mes;i++) {
		for(int j=0;j<10;j++) { 
			sumador+=m[j][i];
		}
	}
	cout<<sumador;
	
	int cont=0;
	for(int i=9;i<10;i++) {
		for(int j=0;j<10;j++) { 
			if(m[j][i]==0){
				cont++;
			}
		}
	}
	cout<<cont;
	
	return 0;
}

