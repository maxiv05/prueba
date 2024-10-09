#include <iostream>
#include <matrix>
using namespace std;

int main() {
	
	matrix<int>m(25,4,0);
	for(int i=0;i<4;i++) { 
		for(size_t j=0;j<25;j++) { 
			int cantidad;
			cin>>cantidad;
			m[i][j]= cantidad; 
		}
	}
	
	int sumador;
	for(int i=0;i<25;i++) {
		sumador=0;
		for(int j=0;j<4;j++) { 
			sumador+= m[i][j];
		}
		cout<<sumador;
	}
	
	int suma=0;
	for(int i=0;i<25;i++) { 
		suma+=m[i][2];
	}
	cout<<suma;
	
	cout<<m[5][0];
	
	int mayor=0;
	for(int i=0;i<4;i++) { 
		if(m[8][i]>mayor){
			mayor=m[8][i];
		}
	}
	cout<<mayor;
	
	return 0;
}

