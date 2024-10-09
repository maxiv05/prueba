#include <iostream>
#include <vector>
using namespace std;

float promedio(const vector<int>&v){
	float sumador=0;
	for(size_t i=0;i<v.size();i++) { 
		sumador+=v[i];
	} return sumador/v.size();
}

int masprom(const vector<int>&v, float prom){
	int contador=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]>prom){
			contador++;
		}
	} return contador;
}
	
void insertar (vector<int>&v, int mayprom){
	v.resize(v.size()+1);
	for(size_t i=v.size()-1; i>0; i--) {
		v[i]=v[i-1];
	} v[0]=mayprom;
}
	
int main() {
	
	vector<int>v;
	int dato;
	cin>>dato;
	while(dato!=-1){
		
		v.push_back(dato);
		cin>>dato;
	}
	
	float prom=promedio(v);
	int mayprom= masprom(v,prom);
	
	insertar(v,mayprom);
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i]<<endl;
	}
	
	
	return 0;
}

