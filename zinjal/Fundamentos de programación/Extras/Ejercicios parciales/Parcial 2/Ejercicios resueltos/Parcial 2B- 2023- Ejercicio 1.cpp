#include <iostream>
#include <vector>
using namespace std;

struct equipoF1{
	string nombre;
	string titular1;
	string titular2;
	string reserva;
};

string sustituir_piloto(vector<equipoF1>&v, string nom){
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].titular1==nom){
			v[i].titular1=v[i].reserva;
			return v[i].reserva;
		}else if(v[i].titular2==nom){
			v[i].titular2=v[i].reserva;
			return v[i].reserva;
		}
	} return "No encontrado";
}
int main() {
	
	int n;
	cin>>n;
	vector<equipoF1>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].nombre;
		cin>>v[i].titular1;
		cin>>v[i].titular2;
		cin>>v[i].reserva;
	}
	
	string nom;
	cin>>nom;
	string sustiruir= sustituir_piloto(v,nom);
	if(sustiruir=="No encontrado"){
		cout<<"No se encontró el nombre"<<endl;
	}else {
		for(size_t i=0;i<v.size();i++) {
			cout<<v[i].nombre;
			cout<<v[i].titular1;
			cout<<v[i].titular2;
		}
	}
	
	return 0;
}

