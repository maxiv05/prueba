#include <iostream>
#include <vector>
using namespace std;

float promedio (const vector<float>&v){
	float suma;
	float cant;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]<=0.3){
			suma+=v[i];
			cant++;
		}
	} return suma/cant;
}

void insertar (vector<float>&v, int pos, float num){
	v.resize(v.size()+1);
	for(size_t i=v.size()-2;i>=pos; i--) { 
		v[i]=v[i-1];
	}v[pos]=num;
}
	
float corregir (vector<float>&v){
	float prom= promedio(v);
	for(size_t i=2;i<v.size();i+=3) { 
		if(v[i]>0.3){
			insertar(v,i,prom);
		}
	}
	float mayor=0;
	for(size_t i=1;i<v.size();i+=3) { 
		if(v[i]>mayor){
			mayor=v[i];
		}
	} return mayor;
}
	
int main() {
	
	return 0;
}

