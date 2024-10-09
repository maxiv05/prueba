#include <iostream>
#include <vector>
using namespace std;

struct archivos{
	string nombre;
	int lineas;
	int funciones;
};

pair<archivos,archivos> mayores(const vector<archivos>&v){
	archivos may={"",0,0}, may2={"",0,0};
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].lineas>may.lineas){
			may2=may;
			may=v[i];
		}else if (v[i].lineas>may2.lineas){
			may2=v[i];
		}
	} return {may, may2};
}
	
pair <int,int> totales(const vector<archivos>&v){
	int totl=0;
	int totf=0;
	for(size_t i=0;i<v.size();i++) { 
		totl+=v[i].lineas;
		totf+=v[i].funciones;
	} return{totl, totf};
}

int main() {
	
	int n;
	cin>>n;
	vector<archivos>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].nombre;
		cin>>v[i].lineas;
		cin>>v[i].funciones;
	}
	
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i].lineas*0.1/v[i].funciones;
	}
	
	pair<archivos, archivos> mayor= mayores(v);
	cout<<mayor.first.nombre;
	cout<<mayor.second.nombre;
	
	pair<int, int> total= totales(v);
	cout<<total.first;
	cout<<total.second;
	
	
	return 0;
}

