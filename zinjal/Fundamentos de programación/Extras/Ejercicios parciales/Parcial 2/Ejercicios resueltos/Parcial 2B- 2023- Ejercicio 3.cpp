#include <iostream>
#include <vector>
using namespace std;

struct colectivos{
	string patente;
	float km;
	int cantidad;
};

pair<colectivos,colectivos> menores(const vector<colectivos>&v){
	colectivos mayor={"",0,99999}, mayor2={"",0,99999};
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].km<mayor.km){
			mayor2=mayor;
			mayor=v[i];
		}else if(v[i].km<mayor2.km){
			mayor2=v[i];
		}
	} return {mayor, mayor2};
}

float promedio(const vector<colectivos>&v){
	float suma=0;
	for(size_t i=0;i<v.size();i++) { 
		suma+=v[i].km;
	}
	float prom= suma/v.size();
	return prom;
}
	
int main() {
	
	int n;
	cin>>n;
	vector<colectivos>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].patente;
		cin>>v[i].km;
		cin>>v[i].cantidad;
	}
	
	pair<colectivos,colectivos> men= menores(v);
	cout<<men.first.patente;
	cout<<men.second.patente;
	
	float prome=promedio(v);
	cout<<prome;
	
	int contador=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].km>prome+500){
			contador++;
		}
	}
	cout<<contador;
	
	return 0;
}

