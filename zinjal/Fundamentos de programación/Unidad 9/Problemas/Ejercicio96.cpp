#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int>v(12,0);
	
	int monto;
	cin>>monto;
	while (monto!=0){
		int dia;
		int mes;
		cin>>dia;
		cin>>mes;
		v[mes-1]+=monto;
		cin>>monto;
	}
	
	
	for(size_t i=0;i<v.size();i++) { 
		cout<<"El mes: "<<i+1<<v[i]<<endl;
	}
	
	int menor=9999;
	int mes=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]<menor){
			menor=v[i];
			mes=i;
		}
	}
	
	cout<<mes+1;
	
	return 0;
}

