#include <iostream>
#include <matrix>
using namespace std;

float prom (const matrix<float>&m, int r){
	int sumador=0;
	for(int i=0;i<12;i++) { 
		sumador+=m[r+1][i];
	}
	float promedio= sumador/12;
	return promedio;
}

pair<float, int> may(const matrix<float>&m, int me){
	int mayor=0;
	int pos;
	for(int i=0;i<8;i++) { 
		if(m[i][me-1]>mayor){
			mayor=m[i][me-1];
			pos=i;
		}
	} return {mayor, pos};
}
	
int main() {
	
	matrix<float>m(8,12,0);
	
	int region;
	cin>>region;
	while (region!=0){
		int mes;
		cin>>mes;
		float mm;
		cin>>mm;
		m[region-1][mes-1]+=mm;
		cin>>region;
	}
	
	int r;
	cin>>r;
	float promedio= prom(m,r);
	cout<<promedio;
	
	int me;
	cin>>me;
	pair<float, int> mayor= may(m,me);
	cout<<mayor.first;
	cout<<mayor.second;
	
	return 0;
}

