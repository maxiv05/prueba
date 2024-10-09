#include <iostream>
#include <matrix>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	matrix<int> m(n,5,0);
	for(size_t i=0;i<n;i++) { 
		int dni;
		int num;
		cin>>dni;
		cin>>num;
		m[num-1][0]=dni;
	}
	
	int num;
	cin>>num;
	while(num!=0){
		int examen;
		int nota;
		cin>>examen;
		cin>>nota;
		m[num-1][examen]=nota;
		cin>>num;
	}
	
	for(size_t i=0;i<n;i++) { 
		m[i][4]=m[i][1]+m[i][2]+m[i][3];
	}
	
	int mayor=0;
	int dnimay;
	int mayor2=0;
	int dnimay2;
	
	for(size_t i=0;i<n;i++) { 
		if(m[i][4]>mayor){
			mayor2=mayor;
			dnimay2=dnimay;
			mayor=m[i][4];
			dnimay=m[i][0];
		} else if(m[i][4]>mayor2){
			mayor2=m[i][4];
			dnimay2=m[i][0];
		}
	}
	
	
	return 0;
}

