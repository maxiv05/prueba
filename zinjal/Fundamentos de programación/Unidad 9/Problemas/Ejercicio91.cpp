#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector <int> alumnos(30,0);
	float notas;
	float sumador;
	for(size_t i=0;i<alumnos.size();i++) { 
		cin>>notas[i];
		sumador+=notas[i];
	}
	
	float promedio= sumador/alumnos.size();
	
	for(size_t i=0;i<alumnos.size();i++) { 
		if(alumnos[i]>promedio){
			cout<<alumnos[i];
		}
	}
	
	
	return 0;
}

