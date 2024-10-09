#include <iostream>
using namespace std;

int buscar (const vector<int>&v, int val, int pos=0){
	for(size_t i=pos;i<v.size();i++) { 
		if(val==v[i]){
			return i;
		}
	}return -1;
}

void eliminar(vector<int>&v, int pos){
	for(size_t i=pos+1; i<v.size();i++) { 
		v[i-1]= v[i]
	}v.resize(v.size()-1);
}

int main() {
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i];
	}
	
	int pos= buscar(v,523);
	while(pos!=-1){
		eliminar(v,pos);
		pos=buscar(v,523,pos);
	}
	
	return 0;
}

