#include <iostream>
#include <vector>
using namespace std;

int buscar(vector<string>&v, string elimin){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]==elimin){
			return i;
		}
	} return -1;
}
	
void eliminar (vector<string>&v, int pos){
	for(size_t i=pos+1; i<v.size();i++) { 
		v[i-1]=v[i];
	}v.resize(v.size()-1);
}

int buscar2(vector<string>&v, string nuevo){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]>nuevo){
			return i;
		}
	}return v.size();
}
	
void insertar (vector<string>&v, string nuevo, int pos2){
	v.resize(v.size()+1);
	for(size_t i=v.size()-1;i>0;i--) { 
		v[i]=v[i-1];
	}
	v[pos2]=nuevo;
}
int main() {
	
	vector<string>v(10);
	int nombre;
	for(size_t i=0;i<v.size();i++) { 
		cin>>nombre;
	}
	
	int elimin;
	cin>>elimin;
	int pos= buscar(v,elimin);
	eliminar(vector, pos);
	
	int nuevo;
	cin>>nuevo;
	
	int pos2=buscar2(v,nuevo);
	insertar(v,nuevo, pos2);
	
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i]<<" ";
	}
	
	return 0;
}

