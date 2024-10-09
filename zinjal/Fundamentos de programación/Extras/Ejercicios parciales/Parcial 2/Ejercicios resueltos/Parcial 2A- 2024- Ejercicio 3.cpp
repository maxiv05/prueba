#include <iostream>
#include <vector>
using namespace std;

void ordenar (vector<string>&v){
	int pos =-1;
	for(size_t i=1;i<v.size();i++) { 
		int contador;
		while(contador!=-1){
			contador++;
			if(v[contador-1]>v[contador]){
				pos=contador-1;
				contador=-1;
			}
		}
		if(pos!=-1){
			for(size_t j=pos; j<v.size()-1; j++) { //funcion eliminar.
				v[j]=v[j+1];
			}v.resize(v.size()-1);
		}
	}
}

int main() {

	vector<string> v(5);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i];
	}
	
	for(size_t i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	
	ordenar(v);
	
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i];
	}
	
	
	return 0;
}

