#include <iostream>
#include <vector>
using namespace std;

pair<float, float> promedio (vector<int>&v){
	vector<int>pares;
	vector<int>impares;
	float sumadorpar=0;
	float sumadorimpar=0;
	
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]%2==0){
			pares.resize(pares.size()+1);
			pares[i]=v[i];
			sumadorpar+=pares[i];
		}else{
			impares.resize(impares.size()+1);
			impares[i]=v[i];
			sumadorimpar+= impares[i];
		}
	} 
	return {sumadorpar/pares.size(), sumadorimpar/pares.size()};
}
	
vector<int> yaordenado (vector<int>&v){
	vector<int>auxpares;
	int contadorp=0;
	vector<int>auximpares;
	int contadorimp=0;
	
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]%2==0){
			auxpares.resize(auxpares.size()+1);
			auxpares[i]=v[i];
			contadorp++;
		}else{
			auximpares.resize(auximpares.size()+1);
			auximpares[i]=v[i];
			contadorimp++;
		}
	} 
	vector<int>ordenar1(contadorimp+contadorp);
	for(int i=0;i<contadorp;i++) { 
		ordenar1[i]=auxpares[i];
	}
	for(int i=contadorp; i<ordenar1.size(); i++) {
		ordenar1[i]=auximpares[i];
	}
	return ordenar1;
}

int main() {
	
	int n;
	cin>>n;
	vector<int>v(n);
	
	for(size_t i=0;i<v.size();i++) { 
		v[i]=rand()% (1500-1000+1)+1000;
		cout<<v[i]<<endl;
	}
	
	cout<<endl;
	
	vector<int> orden = yaordenado(v);
	for(size_t i=0;i<orden.size();i++) { 
		cout<<orden[i];
	}
	
	cout<<endl;
	
	pair<float, float> prom= promedio (v);
	cout<<prom.first<<endl;
	cout<<prom.second<<endl;
	
	
	return 0;
}

