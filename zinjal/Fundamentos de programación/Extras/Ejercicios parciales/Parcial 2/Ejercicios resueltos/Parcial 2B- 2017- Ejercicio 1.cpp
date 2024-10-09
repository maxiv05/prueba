#include <iostream>
#include <vector>
using namespace std;

struct atleta{
	string nombre;
	int tiempo;
};

pair<atleta, atleta> ganadores (const vector<atleta>&v){
	atleta menor={"", 9999}, menor2={"",9999};
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].tiempo<menor.tiempo){
			menor2=menor;
			menor=v[i];
		}else if (v[i].tiempo<menor2.tiempo){
			menor2=v[i];
		}
	} return {menor, menor2};
}

int casiganados(const vector<atleta>&v, int tiempo2){
	int contador=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].tiempo>tiempo2 and v[i].tiempo<=tiempo2 +5){
			contador++;
		}
	} return contador;
}
	
int main() {
	
	int n;
	cin>>n;
	vector<atleta>v(n);
	
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].nombre;
		cin>>v[i].tiempo;
	}
	
	pair<atleta, atleta> dosganadores= ganadores(v);
	cout<<dosganadores.first.nombre<<endl;
	cout<<dosganadores.first.tiempo<<endl;
	cout<<dosganadores.second.nombre<<endl;
	cout<<dosganadores.second.tiempo<<endl;
	
	int tiempo2= dosganadores.second.tiempo;
	
	int casiganan= casiganados(v, tiempo2);
	cout<<casiganan;
	
	
	return 0;
}

