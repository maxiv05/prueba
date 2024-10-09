#include <iostream>
#include <vector>
using namespace std;

int buscar (vector<string>&v, string nuevo){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]>nuevo){
			return i;
		}
	}return v.size();
}
	
void inserta (vector<string>&v, string s, int pos){
	v.resize(v.size()+1);
	for(size_t i=v.size()-1; i>0; i--) {
		v[i]=v[i-1];
	}
	v[pos]= s;
}

int main() {
	
	vector<string>v(100);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i];
	}
	
	string nuevo;
	cin>>nuevo;
	int pos= buscar(v,nuevo);
	
	inserta(v,nuevo,pos);
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i];
	}
	
	return 0;
}

