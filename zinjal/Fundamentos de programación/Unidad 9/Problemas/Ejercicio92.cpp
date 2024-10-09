#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	
	vector<int> numeros(20);
	for(size_t i=0;i<numeros.size();i++) { 
		numeros[i]=rand()%51+100;
	}
	
	int m;
	int p;
	cin>>m;
	cin>>p;
	
	numeros.resize(numeros.size()+1);
	for(size_t i=numeros.size()-1; i>p; i--) {
		numeros[i]=numeros[i-1];
	}
	numeros[p]=m;
	
	for(size_t i=0;i<numeros.size();i++) { 
		cout<<numeros[i]<<" ";
	}
	
	
	return 0;
}

