#include <iostream>
#include <vector>
using namespace std;

struct paciente{ 
	int dni;
	char sexo;
	float hemog1=0;
	float hemog2=0;
};

pair<float, float> prom_hemog(const vector<paciente>&v){
	int sumamasc=0;
	float prommasc=0;
	int sumafem=0;
	float promfem=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].hemog1!=0 and v[i].hemog2!=0){
			if(v[i].sexo=='M'){
				sumamasc+=v[i].hemog2;
				prommasc++;
			}else if (v[i].sexo=='F'){
				sumafem+=v[i].hemog2;
				promfem++;
			}
		}
	}
	float promediomasc= sumamasc/prommasc;
	float promediofem= sumafem/promfem;
	return {promediomasc, promediofem};
}

vector<paciente> grupo_hemobaja(vector<paciente>&v){
	vector<paciente>aux;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].hemog1!=0 and v[i].hemog2!=0){
			if(v[i].hemog2>=v[i].hemog1){
				aux.resize(aux.size()+1);
				aux[i]=v[i];
			}
		}
	} return aux;
}
	
int main() {
	
	int n;
	cin>>n;
	vector<paciente>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].dni;
		cin>>v[i].sexo;
		cin>>v[i].hemog1;
		cin>>v[i].hemog2;
	}
	
	pair<float, float> promedio= prom_hemog(v);
	cout<<promedio.first<<endl;
	cout<<promedio.second<<endl;
	
	vector<paciente>aux = grupo_hemobaja(v);
	for(size_t i=0;i<aux.size();i++) { 
		cout<<aux[i].dni;
	}
	
	
	return 0;
}

