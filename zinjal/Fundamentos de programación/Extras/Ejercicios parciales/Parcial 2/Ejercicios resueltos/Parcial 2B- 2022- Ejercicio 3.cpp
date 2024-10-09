#include <iostream>
#include <vector>
using namespace std;

bool existe (vector<int>&v, int num){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]==num){
			return true;
		}
	} return false;
}
	
void agregar (vector<int>&v, int num){
	if(existe(v,num)==false){
		v.push_back(num);
	}else {
		cout<<"el numero ya existe"<<endl;
	}
}

int main() {
	
	vector<int>v;
	int numeros;
	int leidos=0;
	
	cin>>numeros;
	while(numeros!=0){
		agregar(v, numeros);
		leidos++;
		cin>>numeros;
	}
	
	for(size_t i=0;i<v.size();i++) { 
		cout<<v[i]<<endl;
	}
	
	cout<<v.size()<<endl;
	cout<<leidos<<endl;
	
	return 0;
}

