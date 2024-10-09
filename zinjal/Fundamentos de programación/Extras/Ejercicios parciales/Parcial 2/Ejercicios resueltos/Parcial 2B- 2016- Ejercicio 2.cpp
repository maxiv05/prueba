#include <iostream>
#include <vector>
#include <matrix>
using namespace std;

int main() {
	
	vector<string> tipos(30);
	for(size_t i=0;i<tipos.size();i++) { 
		cin>>tipos[i];
	}
	
	matrix<int>m(10,30,0);
	int producto;
	cin>>producto;
	while(producto!=-1){
		int verduleria;
		cin>>verduleria;
		int cantidad;
		cin>>cantidad;
		m[verduleria][producto]+=cantidad;
		cin>>producto;
	}
	
	
	for(size_t i=0;i<30;i++) { 
		int sumador=0;
		for(size_t j=0;j<10;j++) { 
			sumador+=m[j][i];
		}
		m[i][11]=sumador;
	}
	
	int mayor=0;
	int producto;
	for(size_t i=0;i<10;i++) { 
		if(m[i][5]>mayor){
			mayor=m[i][5];
			producto=i;
		}
	}
	cout<<producto;
	
	int cantidad= m[3][5];
	
	return 0;
}

	
