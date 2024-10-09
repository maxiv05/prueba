#include <iostream>
#include <matrix>
using namespace std;

void mostrar (matrix<int>&m){
	for(size_t i=0;i<m.size(0);i++) {
		for(size_t j=0;j<m.size(1);j++) { 
			cout<<m[i][j]<<" ";
		}
	}
}


int main() {
	
	matrix<int>m(12,5,-1);
	for(int i=0;i<12;i++) { 
		for(int j=0;j<5;j++) { 
			cin>>m[i][j];
		}
	}
	
	mostrar(m);
	
	for(int i=0;i<5;i++) { 
		float total=0;
		int cant;
		for(int j=0;j<12;j++) { 
			if(m[j][i]!=-1){
				total+=m[j][i];
				cant++;
			}
		} int promedio= total/cant;
		for(int j=0;j<12;j++) { 
			if(m[j][i]==-1){
				m[j][i]=promedio;
			}
		}
	}
	
	mostrar(m);
	
	m.resize(13,5);
	for(int i=0;i<5;i++) { 
		int total=0;
		for(int j=0;j<12;j++) { 
			total+=m[j][i];
		}
		m[12][i]=total;
	}
	
	mostrar(m);
	
	
	
	return 0;
}

