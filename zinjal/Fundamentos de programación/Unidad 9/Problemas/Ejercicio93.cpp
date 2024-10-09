#include <iostream>
#include <vector>
using namespace std;

int busca_pos(const vector<string>&v, string nuevo){
	for(size_t i=0;i<v.size();i++) { 
		if(nuevo>v[i]){
			return i;
		}
	}return v.size();
}

void inserta (vector<string>&v,string nuevo, int pos){
	v.resize(v.size()+1);
	for(size_t i=v.size()-1;i>pos; i++) { 
		v[i]=v[i-1];
	}
	v[pos]=nuevo;
}

int main() {
	
	vector<string> v(100);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i];
	}
	
	string nueva;
	cin>>nueva;
	
	int pos= busca_pos(v, nueva);
	inserta(v, nueva, pos);
	
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i]<<endl;
	}
	
	
	return 0;
}

