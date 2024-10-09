#include <iostream>
#include <matrix>
using namespace std;

void mostrar(matrix<int>&m){
	for(size_t i=0;i<2;i++) {
		for(size_t j=0;j<5;j++) {
			cout<<m[i][j];
		}
	}
}

pair <int, int> may(const matrix<int> &m, char destino){
	int mayor1=0; int tipo1;
	int mayor2=0; int tipo2;
	if(destino=='P'){
		for(int i=0;i<1;i++) { 
			for(int j=0;j<5;j++) { 
				if(m[i][j]>mayor1){
					mayor2=mayor1;
					tipo2=tipo1;
					mayor1=m[i][j];
					tipo1=j;
				}else{
					mayor2=m[i][j];
					tipo2=j;
				}
			}
		}
	}
	if (destino=='S'){
		for(int i=1;i<2;i++) { 
			for(int j=0;j<5;j++) { 
				if(m[i][j]>mayor1){
					mayor2=mayor1;
					tipo2=tipo1;
					mayor1=m[i][j];
					tipo1=j;
				}else{
					mayor2=m[i][j];
					tipo2=j;
				}
			}
		}
	} return {tipo1, tipo2};
}

	
pair<float, float> recaudacion(const matrix<int>&m, vector<float>&v){
	float sumasf=0;
	float sumapna=0;
	for(int i=0;i<1;i++) { 
		for(int j=0;j<5;j++) { 
			sumapna+=m[i][j]*v[j];
		}
	}
	for(int i=1;i<2;i++) { 
		for(int j=0;j<5;j++) { 
			sumasf+=m[i][j]*v[j];
		}
	} return{sumapna,sumasf};
}
	
int main() {
	
	vector<float>v(5);
	float costo;
	for(int i=0;i<5;i++) { 
		cin>>costo;
	}	
	
	matrix<int>m(2,5,0);
	int vehiculo;
	cin>>vehiculo;
	switch (vehiculo=!0){
	case 1: {char ciudad;
			cin>>ciudad;
			if(ciudad=='P'){
				m[0][vehiculo]+=m[ciudad][vehiculo];
			}else {
				m[1][vehiculo]+=m[ciudad][vehiculo];
			}
		}
	case 2: {char ciudad;
			cin>>ciudad;
			if(ciudad=='P'){
				m[0][vehiculo]+=m[ciudad][vehiculo];
			}else {
				m[1][vehiculo]+=m[ciudad][vehiculo];
			}
		}
	case 3: {char ciudad;
			cin>>ciudad;
			if(ciudad=='P'){
				m[0][vehiculo]+=m[ciudad][vehiculo];
			}else {
				m[1][vehiculo]+=m[ciudad][vehiculo];
			}	
		}
	case 4:{ char ciudad;
			cin>>ciudad;
			if(ciudad=='P'){
				m[0][vehiculo]+=m[ciudad][vehiculo];
			}else {
				m[1][vehiculo]+=m[ciudad][vehiculo];
			}
		}
	case 5:{ char ciudad;
			cin>>ciudad;
			if(ciudad=='P'){
				m[0][vehiculo]+=m[ciudad][vehiculo];
			}else {
			m[1][vehiculo]+=m[ciudad][vehiculo];
			}
		}
	cin>>vehiculo;
	}
	
	mostrar(m);
	
	char destino;
	cin>>destino;
	pair<int, int> mayores= may(m, destino);
	cout<<mayores.first;
	cout<<mayores.second;
	
	
	pair<float, float> total=recaudacion(m,v);
	cout<<total.first;
	cout<<total.second;
	
	return 0;
}

