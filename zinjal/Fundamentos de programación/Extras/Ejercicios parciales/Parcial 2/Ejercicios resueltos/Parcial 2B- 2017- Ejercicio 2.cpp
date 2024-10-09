#include <iostream>
#include <matrix>
using namespace std;

int main() {
	
	matrix<float>m(10,12,0);
	
	int escuela;
	cin>>escuela;
	while(escuela!=0){
		int dia;
		cin>>dia;
		int mes;
		cin>>mes;
		int anio;
		cin>>anio;
		float monto;
		cin>>monto;
		m[escuela][mes]+=monto;
		cin>>escuela;
	}
	
	int sumador=0;
	for(int i=0;i<10;i++) { 
		for(int j=0;j<12;j++) { 
			sumador+=m[i][j];
		}
		cout<<100000-sumador;
	}
	
	int contador;
	int sumar;
	for(int i=1;i<2;i++) {
		sumar=0;
		for(int j=0;j<10;j++) { 
			sumar+=m[j][i];
			if(sumar==100000){
				contador++;
			}
		}
	}
	cout<<contador;
	
	int menor=99999;
	int school;
	for(int i=9;i<10;i++) {
		for(int j=0;j<10;j++) { 
			if(m[j][i]<menor){
				menor=m[j][i];
				school=j;
			}
		}
	}
	
	cout<<school;
	
	return 0;
}

