#include <iostream>
#include <matrix>
using namespace std;

struct datos{
	int codigo;
	string nombre;
	string localidad;
	matrix<float>ventas;
};

pair<int,int> mayor (const matrix<float>&ventas){
	int mayor=0;
	int loc;
	for(size_t i=0;i<ventas.size(0);i++) {  
		for(size_t j=0;j<ventas.size(1);j++) { 
			if(ventas[i][j]>mayor){
				mayor=ventas[i][j];
				loc=i;
			}
		}
	} return {mayor,loc};
}

int cant (const matrix<float>&ventas){
	int contador=0;
	for(size_t i=0;i<ventas.size(0);i++) { 
		if(ventas[i][9]==0){
			contador++;
		}
	}
	return contador;
}
	
int main() {
	
	int n;
	cin>>n;
	vector<datos>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].codigo;
		cin>>v[i].nombre;
		cin>>v[i].localidad;
	}
	
	matrix<float> ventas(13,30,0);
	int codigo;
	cin>>codigo;
	while (codigo!=0){
		int dia;
		cin>>dia;
		float monto;
		cin>>monto;
		ventas[codigo][dia]+=monto;
		cin>>codigo;
	}
	
	pair<int,int> mayventas = mayor(ventas);
	cout<<mayventas.first;
	cout<<mayventas.second;
	
	int no_ventas= cant (ventas);
	cout<<no_ventas;
	
	int sumador;
	for(size_t i=0;i<ventas.size(0);i++) { 
		sumador+= ventas[i][14];
	}
	
	cout<<sumador;
	
	return 0;
}

