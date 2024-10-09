#include <iostream>
#include <vector>
using namespace std;

struct datos{
	int codigo;
	int anio;
	int cantidad;
	string cultivo;
};

int provincia (const vector<datos>&v, int anio){
	int mayor=0;
	int prov;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].anio==anio){
			if(v[i].cultivo=="soja"){
				if(v[i].cantidad>mayor){
					mayor=v[i].cantidad;
					prov=v[i].codigo;
				}
			}
		}
	} return prov;
}

int main() {
	
	vector<datos>v(240);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].codigo;
		cin>>v[i].anio;
		cin>>v[i].cantidad;
		cin>>v[i].cultivo;
	}
	
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].cultivo=="Trigo"){
			if(v[i].anio==2014<v[i].anio==2005){
				cout<<v[i].provincia;
			}
		}
	}
	
	int anio;
	cin>>anio;
	int prov= provincia (v, anio);
	cout<<prov;
	
	int contador=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].anio==2013){
			if(v[i].cultivo=="Maiz"){
				contador+=v[i].cantidad;
			}
		}
	}
	cout<<contador;
	
	return 0;
}

