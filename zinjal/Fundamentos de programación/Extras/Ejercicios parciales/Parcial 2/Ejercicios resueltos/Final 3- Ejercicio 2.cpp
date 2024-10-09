#include <iostream>
#include <matrix>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	matrix<int>m(n,8,0);
	
	vector<int> fechas(8);
	for(size_t i=0;i<fechas.size();i++) { 
		cin>>fechas[i];
	}
	
	int tp;
	cin>>tp;
	while(tp!=0){
		int alumno;
		cin>>alumno;
		int fecha;
		cin>>fecha;
		m[alumno][tp]=fecha;
		cin>>tp;
	}
	
	for(size_t i=0;i<n;i++) { 
		int contador=0;
		for(size_t j=0;j<8;j++) { 
			if(m[i][j]!=0){
				contador++;
			}
		} 
		if(contador==8){
			cout<<i;
		}
	}
	
	for(int i=0;i<8;i++) { 
		int contador=0;
		int sumador=0;
		for(int j=0;j<n;j++) { 
			if(m[i][j]!=0){
				contador++;
			}
			if(m[i][j]==fechas[i]){
				sumador ++;
			}
		}
		cout<<sumador/contador;
	}
	
	
	int menor=99999;
	int menor2=9999;
	int pos;
	int pos2;
	for(size_t i=0;i<8;i++) { 
		int sumador=0;
		for(int j=0;j<n;j++) { 
			sumador+=m[j][i];
		}
		if(sumador<menor){
			menor2=menor;
			pos2=pos;
			menor=sumador;
			pos=i;
		}else if(sumador<menor2){
			menor2=sumador;
			pos2=i;
		}
	}
	
	cout<<pos<<pos2;
	
	return 0;
}

