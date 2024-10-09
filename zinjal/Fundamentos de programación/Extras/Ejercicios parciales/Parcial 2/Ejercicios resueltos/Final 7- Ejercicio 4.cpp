#include <iostream>
#include <vector>
using namespace std;

int buscar(const vector<int>&v, int x){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]==x){
			return i;
		}
	}return -1;
}

int buscar2 (const vector<int>&v, int x){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]<x){
			return i;
		}
	}return v.size();
}
	
void insertar (vector<int>&v, int x, int pos){
	v.resize(v.size()+1);
	for(size_t i=v.size()-1; i>pos; i++) { 
		v[i]=v[i-1];
	} 
	v[pos]=x;
	
}

bool ordenados (vector<int>&v, int x){
	int p= buscar(v,x);
	if(p==-1){
		int pos=buscar2(v,x);
		insertar (v,x,pos);
		return true;
	}
	
	return false;
}

int main() {
	
	return 0;
}

