#include <iostream>
#include <matrix>
using namespace std;

void generar (matrix<int>&m, int n){
	int fila=rand()%(10-1+1)+0;
	int columna=rand()%(10-1+1)+0;;
	int contador=0;
	while(contador<n){
		m[fila][columna]=rand()%(1-0+1)+0;
		contador++;
	}
}
	
int sin_hundir(const matrix<int>&m){
	int contador=0;
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			if(m[i][j]==1){
				contador++;
			}
		}
	} return contador;
}

int main() {
	
	matrix<int>m(10,10);
	int n;
	cin>>n;
	generar(m,n);
	
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			cout<<m[i][j]<<" ";
		}		
		cout<<endl;
	}
	
	int no_hundidos= sin_hundir(m);
	cout<<no_hundidos;
	
	int contador=0;
	int contadorfalla=0;
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			if(m[i][j]==1){
				m[i][j]=0;
				contador++;
			}else{
				contadorfalla++;
			}
		}
	}
	cout<<contador;
	cout<<contadorfalla;
	cout<<contador/contador+contadorfalla;
	
	
	
	return 0;
}

