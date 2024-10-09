#include <iostream>
#include <vector>
using namespace std;

int menor(const vector<int>&v){
	int menor=9999999;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]<menor and v[i]>=0){
			menor=v[i];
		}
	}return menor;
}
	
int mayor(const vector<int>&v){
	int mayor=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]>mayor){
			mayor=v[i];
		}
	} return mayor;
}


int main() {
	
	vector<int>v(7);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i];
	}
	
	float promedio= (mayor(v)+menor(v))/2;
	
	int reemplazos=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]<0){
			v[i]=promedio;
			reemplazos++;
		} cout<<v[i]<<endl;
	}
	
	cout<<endl;
	cout<< reemplazos;
	
	return 0;
}

