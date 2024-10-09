#include <iostream>
#include <vector>
using namespace std;

int buscar (const vector<string>&v, string nuevo){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]>nuevo){
			return i;
			break;
		}
	} return v.size();
}

void insertar (vector<string>&v, string nuevo, int pos){
	v.resize(v.size()+1);
	for(size_t i=v.size()-1; i>pos; i--) { 
		v[i]=v[i-1];
	}
	v[pos]=nuevo;
}
	
int main() {
	
	int n;
	cin>>n;
	vector<string>v(n);
	
	string nuevo;
	cin>>nuevo;
	
	int pos= buscar (v, nuevo);
	insertar(v,nuevo,pos);
	
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i]<<endl;
	}
	
	return 0;
}

