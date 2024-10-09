#include <iostream>
#include <matrix>
using namespace std;

int main() {
	
	matrix<int>m(15,30,0);
	int vendedor;
	cin>>vendedor;
	while(vendedor!=0){
		int dia;
		cin>>dia;
		int cantidad;
		cin>>cantidad;
		m[vendedor][dia]+=cantidad;
		cin>>vendedor;
	}
	
	int mayor=0;
	int codmayor;
	for(int i=0;i<15;i++) { 
		if(m[i][9]>mayor){
			mayor=m[i][9];
			codmayor=i;
		}
	}
	cout<<codmayor;
	
	int sumador=0;
	for(int i=0;i<30;i++) { 
		for(int j=0;j<15;j++) { 
			sumador+=m[i][j];
		}
		cout<<sumador;
	}
	
	int contador;
	for(int i=0;i<30;i++) { 
		for(int j=9;j<10;j++) {  
			contador++;
		}
	}
	
	cout<<contador;
	
	
	return 0;
}

	
