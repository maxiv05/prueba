#include <iostream>
#include <matrix>
using namespace std;

int buscar(const matrix<string>&m, string s){
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			if(m[i][j]==s){
				cout<<"En la fila"<<i<<endl;
				cout<<"En la columna"<<j;
				break;
			}
		}
	} return -1;
}

void reemplazar (matrix<string>&m){
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) {
			if(m[i][j]=="null"){
				m[i][j]=" ";
			}
		}
	}
}
	
int main() {
	
	int i,j;
	matrix<string>m(i,j);
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			cin>>m[i][j];
		}
	}
	
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			reemplazar(m);
		}
	}
	
	
	
	return 0;
}

