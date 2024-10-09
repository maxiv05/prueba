#include <iostream>
#include <matrix>
using namespace std;

int mayor(const vector<int>&v){
	int mayor=0;
	int maypos;
	for(size_t i=0;i<v.size();i++) { 
		if (v[i]>mayor){
			mayor=v[i];
			maypos=i;
		}
	}
	return maypos;
}

int main() {
	
	int n;
	cin>>n;
	matrix<int>m(n,24,0);
	
	for(int esquina=0; esquina<n; esquina++) { 
		for(int j=0;j<24;j++) { 
			int cantidad;
			cin>>cantidad;
			m[esquina][j]= cantidad;
		}
	}
	
	vector<int> canthora(24,0);
	vector<int> cantesq(n,0);
	for(int esquina=0;esquina<n;esquina++) { 
		for(int j=0;j<24;j++) { 
			canthora[j]+= m[esquina][j];
			cantesq[esquina]+=m[esquina][j];
		}
	}
	
	int mayho= mayor(canthora);
	cout<<mayho;
	
	int mayes= mayor(cantesq);
	cout<<mayes+1;
	
	int cantidad;
	cin>>cantidad;
	for(int i=0;i<n;i++) { 
		for(int j=0;j<24;j++) { 
			if(m[i][j]>cantidad){
				cout<<i+1;
				cout<<j;
			}
		}
	}
	
	return 0;
}

