#include <iostream>
#include <vector>
using namespace std;

struct persona{
	int dni;
	int anio;
	int mes;
	int dia;
	int edad;
	string apellido;
	string nombre;
};

float promedio (vector<persona>&v){
	int sumador=0;
	for(size_t i=0;i<v.size();i++) { 
		sumador+=v[i].edad;
	}
	
	float promedio= sumador/v.size();
	return promedio;
}

int buscar (vector<persona>&v, string ape){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].apellido==ape){
			return i;
		}
	} return -1;
}
	
void eliminar (vector<persona>&v, int pos){
	for(size_t i=pos+1; i<v.size(); i++) { 
		v[i-1]=v[i];
	}v.resize(v.size()-1);
}
	
int main() {
	
	int n;
	cin>>n;
	vector<persona>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].dni;
		cin>>v[i].anio;
		cin>>v[i].mes;
		cin>>v[i].dia;
		cin>>v[i].edad;
		cin>>v[i].apellido;
		cin>>v[i].nombre;
	}
	
	float prom= promedio(v);
	
	for(size_t i=0;i<v.size();i++) { 
		if(prom>=v[i].edad){
			cout<<v[i].apellido<<endl;
			cout<<v[i].nombre<<endl;
			cout<<v[i].edad<<endl;
			cout<<v[i].dni<<endl;
		}
	}
	
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i].apellido<<endl;
		cout<<v[i].nombre<<endl;
		cout<<v[i].edad<<endl;
		cout<<v[i].dni<<endl;
		cout<<v[i].mes<<endl;
		cout<<v[i].dia<<endl;
		cout<<v[i].anio<<endl;
	}
	
	string ape;
	cin>>ape;
	int pos= buscar(v,ape);
	
	eliminar(v,pos);
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i].apellido<<endl;
		cout<<v[i].nombre<<endl;
		cout<<v[i].edad<<endl;
		cout<<v[i].dni<<endl;
		cout<<v[i].mes<<endl;
		cout<<v[i].dia<<endl;
		cout<<v[i].anio<<endl;
	}
	
	return 0;
}

