#include <iostream>
#include <vector>
using namespace std;

struct atleta{
	string apellido;
	string nombre;
	int codigo;
	int h1;
	int m1;
	int s1;
};

atleta ganador(const vector<atleta>&v){
	atleta mayor={"","",9999,9999,9999,9999};
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].h1!=0 and v[i].m1!=0 and v[i].s1!=0){
			if(v[i].h1<mayor.h1 or (v[i].h1==mayor.h1 and v[i].m1<mayor.m1) or(v[i].h1==mayor.h1 and v[i].m1==mayor.m1 and v[i].s1<mayor.s1)){
				mayor=v[i];
			}
		}
	} return mayor;
}
	
vector<atleta> terminaron (const vector<atleta>&v){
	vector<atleta> aux;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].h1!=0 and v[i].m1!=0 and v[i].s1!=0){
			aux.resize(aux.size()+1);
			aux[i]=v[i];
		}
	}return aux;
}

int main() {
	
	vector<atleta>v;
	
	int contador=0;
	while(contador<=35){
		v.resize(v.size()+1);
		string apellido;
		cin>>apellido;
		v[v.size()-1].apellido=apellido;
		string nombre;
		cin>>nombre;
		v[v.size()-1].nombre=nombre;
		int codigo;
		cin>>codigo;
		v[v.size()-1].codigo=codigo;
		int h1;
		cin>>h1;
		v[v.size()-1].h1=h1;
		int m1;
		cin>>m1;
		v[v.size()-1].m1=m1;
		int s1;
		cin>>s1;
		v[v.size()-1].s1=s1;
		contador++;
	}
	
	atleta gana= ganador(v);
	cout<<gana.apellido;
	cout<<gana.nombre;
	
	vector<atleta> aux= terminaron (v);
	for(size_t i=0;i<aux.size();i++) { 
		cout<<aux[i].nombre;
		cout<<aux[i].apellido;
	}
	
	return 0;
}

