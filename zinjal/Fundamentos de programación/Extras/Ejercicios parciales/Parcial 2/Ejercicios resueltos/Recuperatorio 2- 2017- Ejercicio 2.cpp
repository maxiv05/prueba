#include <iostream>
#include <matrix>
#include <vector>
using namespace std;

//Leí tarde que habia que usar funciónes :)

int main() {
	
	vector<float> v(10);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i];
	}
	
	matrix<float>m(10,12,0);
	int facultad;
	cin>>facultad;
	while(facultad!=0){
		int mes;
		cin>>mes;
		float gastos;
		cin>>gastos;
		m[facultad][mes]+=gastos;
		cin>>facultad;
	}
	
	float sumador=0;
	for(int i=0;i<10;i++) { 
		for(int j=0;j<12;j++) { 
			sumador+=m[i][j];
		}
		cout<<sumador-v[i];
	}
	
	int contador;
	float sumar=0;
	for(int i=0;i<10;i++) { 
		for(int j=0;j<12;j++) { 
			sumar+=m[i][j];
		}
		float resta=sumar-v[i];
		if(resta<0){
			contador++;
		}
	}
	
	cout<<contador;
	
	float mayor=0;
	for(int i=0;i<10;i++) { 
		for(int j=0;j<12;j++) { 
			if(m[i][j]>mayor){
				mayor=m[i][j];
			}
		}
	}
	
	cout<<mayor;
	
	return 0;
}

