#include <iostream>
#include <matrix>
using namespace std;

int detectados(const matrix<int>&m, int x){
	int contador=0;
	for(int i=x;i<x+1;i++) {
		for(int j=0;j<12;j++) { 
			contador+=m[i][j];
		}
	} return contador;
}
	
int nomayo (const matrix<int>&m){
	int contador=0;
	for(int i=4;i<5;i++) { 
		for(int j=0;j<19;j++) { 
			if(m[i][j]==0){
				contador++;
			}
		}
	} return contador;
}
	
int main() {
	
	matrix<int>m(19,12,0);
	int dpto;
	cin>>dpto;
	while(dpto!=-1){
		int mes;
		cin>>mes;
		int casos;
		cin>>casos;
		m[dpto][mes]+=casos;
		cin>>dpto;
	}
	
	int x;
	cin>>x;
	int cantidad=detectados(m,x);
	cout<<cantidad;
	
	int nomay= nomayo(m);
	cout<<nomay;
	
	int contador=0;
	for(int i=4;i<5;i++) {
		for(int j=6;j<7;j++) { 
			contador+=m[i][j];
		}
	}
	
	cout<<contador;
	
	int mayor=0;
	int depa;
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) {
			if(m[i][j]>mayor){
				mayor=m[i][j];
				depa=i;
			}
		}
	}
	
	cout<<depa+1;
	
	
	return 0;
}

