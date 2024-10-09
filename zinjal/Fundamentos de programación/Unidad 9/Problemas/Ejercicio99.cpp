#include <iostream>
#include <matrix>
#include <vector>
using namespace std;

int main() {
	matrix<int>m(25,4,0);
	vector<int>v(25);
	
	for(int i=0;i<4;i++) { 
		for(size_t j=0;j<25;j++) { 
			int cantidad;
			cin>>cantidad;
			m[i][j]= cantidad; 
		}
	}
	
	for(size_t i=0;i<v.size();i++) { 
		float precio;
		cin>>precio;
	}
	
	vector<float>suma(4,0);
	for(size_t i=0;i<suma.size();i++) { 
		for(int j=0;j<25;i++) { 
			suma[i]+=m[i][j]*v[j];
		}cout<<suma[i];
	}
	return 0;
	
	float sumador;
	for(size_t i=0;i<suma.size();i++) { 
		sumador+=suma[i];
	}
	cout<<sumador;
	
	int mayor=0;
	int suc;
	for(int i=0;i<4;i++) { 
		if(suma[i]>mayor){
			mayor=suma[i];
			suc=i;
		}
	} cout<<suc;
	
	
}

