#include <iostream>
#include <matrix>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	matrix<string>m(n,4,"No rindió");
	int alumno;
	cin>>alumno;
	while(alumno!=-1){
		int examen;
		cin>>examen;
		string docente;
		cin>>docente;
		m[alumno-1][examen-1]=docente;
		cin>>alumno;
	}
	
	for(size_t i=0;i<4;i++) {
		int contador=0;
		for(int j=0;j<n;j++) { 
			if(m[i][j]!="No rindió"){
				contador++;
			}
		} cout<<contador;
	}
	
	for(int i=0;i<n;i++) { 
		int contador;
		for(int j=0;j<4;j++) { 
			if(m[i][j]=="No rindió"){
				contador++;
			}
		}
		if(contador==0){
			cout<<n+1;
		}
	}
	
	string docente;
	cin>>docente;
	int contador;
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) {
			if(m[i][j]==docente){
				contador++;
			}
		}
	}
	
	cout<<contador;
	
	
	return 0;
}

