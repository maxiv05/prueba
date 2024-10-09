#include <iostream>
#include <vector>
using namespace std;

int pos_menor(const vector<int>&v){
	int menor=99999;
	int posmenor;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]<menor){
			menor=v[i];
			posmenor=i;
		}
	} 
	return posmenor;
}
	
int eliminar(vector<int>&v, int pos){
	int aux;
	for(size_t i=pos;i<pos+1;i++) { 
		aux=v[i];
	}
	for(size_t i=pos+1; i<v.size(); i++){
		v[i-1]=v[i];
	}
	v.resize(v.size()-1);
	return aux;
}

int main() {
	
	int n;
	cin>>n;
	vector<int>v1(n);
	for(size_t i=0;i<v1.size();i++) { 
		cin>>v1[i];
	}
	
	int m;
	cin>>m;
	vector<int>v2(m);
	for(size_t i=0;i<v2.size();i++) { 
		cin>>v2[i];
	}
	
	vector<int>v3;
	
	
	
	return 0;
}

