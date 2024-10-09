#include <iostream>
#include <vector>
using namespace std;

int buscarpos(vector<int>&v, int nuevo){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]<nuevo){
			return i;
		}
	} return v.size();
}
	
void inserta (vector<int>&v, int nuevo, int pos){
	pos=buscarpos(v, nuevo);
	v.resize(v.size()+1);
	for(size_t i=v.size()-1; i>0; i--) { 
		v[i]=v[i-1];
	}
	v[pos]=nuevo;
}

int main() {
	
	int n;
	cin>>n;
	vector<int>v(n);
	
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i];
	}
	
	int nuevo;
	cin>>nuevo;
	int pos= buscarpos(v,nuevo);
	inserta (v,nuevo, pos);
	
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i]<<endl;
	}
	
	
	return 0;
}

