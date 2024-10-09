#include <iostream>
#include <vector>
using namespace std;

struct frecuencia{
	int numero;
	int veces;
};

int buscar (vector<frecuencia>&v, int num){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].numero==num){
			return i;
		}
	} return -1;
}
	
vector<frecuencia> cantidades (vector<int>&no){
	vector<frecuencia>aux;
	for(size_t i=0;i<no.size();i++) { 
		int pos= buscar (aux,no[i]);
		if(pos==-1){
			frecuencia frec;
			frec.numero=no[i];
			frec.veces=1;
			aux.push_back(frec);
		} else {
			aux[pos].veces++;
		}
	} return aux;
}


int main() {
	
	vector<frecuencia>v;
	
	int n;
	cin>>n;
	vector<int>no(n);
	
	for(int i=0;i<n;i++) { 
		no[i] = rand()%(20-0+1)+0;
		cout<<no[i]<<"  ";
	}
	
	cout<<endl;
	
	vector<frecuencia>aux=cantidades(no);
	for(size_t i=0;i<aux.size();i++) { 
		cout<<aux[i].numero;
		cout<<aux[i].veces;
	}
	
	return 0;
}

