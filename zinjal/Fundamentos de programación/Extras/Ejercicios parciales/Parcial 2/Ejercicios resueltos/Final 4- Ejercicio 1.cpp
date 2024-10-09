#include <iostream>
#include <matrix>
#include <cmath>
using namespace std;

int meses(int fecha){
	int primero=fecha%10000;
	int mes=floor(primero/100);
	return mes;
}

pair<int,int> informar (const matrix<int>&m){
	int mayor=0;
	int dpmay;
	for(int i=0;i<9;i++) { 
		if(m[i][3]>mayor){
			mayor=m[i][3];
			dpmay=i;
		}
	}
	return {mayor, dpmay};
}
	
vector<int> totales (const matrix<int>&m){
	vector<int>aux(12,0);
	for(int i=0;i<12;i++) { 
		for(int j=0;j<9;j++) { 
			aux[i]+=m[j][i];
		}
	} return aux;
}

int main() {
	
	matrix<int>m (9,12,0);
	int dpto;
	cin>>dpto;
	while(dpto!=0){
		int casos;
		cin>>casos;
		int fecha;
		cin>>fecha;
		int mes=meses(fecha);
		m[dpto][mes]+= casos;
		cin>>dpto;
	}
	
	pair<int, int> mayor_abril= informar(m);
	cout<<mayor_abril.first;
	cout<<mayor_abril.second;
	
	vector<int> tot= totales(m);
	for(size_t i=0;i<tot.size();i++) { 
		cout<<tot[i]<<endl;
	}
	
	return 0;
}

