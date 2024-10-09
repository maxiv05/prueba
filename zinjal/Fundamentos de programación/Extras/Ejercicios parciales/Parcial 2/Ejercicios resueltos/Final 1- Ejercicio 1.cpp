#include <iostream>
#include <vector>
using namespace std;

struct alumno{
	int codigo;
	string nombre;
	int dni;
	int nota1=0;
	int nota2=0;
};

vector<alumno> lista_aprob(const vector<alumno>&v){
	vector<alumno>aprueba;
	for(size_t i=0;i<v.size();i++) { 
		if((v[i].nota1+v[i].nota2)/2>=6){
			aprueba.resize(aprueba.size()+1);
			aprueba[i]=v[i];
		}
	} return aprueba;
}
	
alumno mejor_parcial (const vector<alumno>&v, int parcial){
	alumno mejor={0,"",0,0,0};
	for(size_t i=0;i<v.size();i++) { 
		if (parcial ==1){
			if(v[i].nota1>mejor.nota1){
				mejor=v[i];
			}
		}else if (parcial==2){
			if(v[i].nota2>mejor.nota2){
				mejor=v[i];
			}
		}
	} return mejor;
}

alumno mejor_segundo(const vector<alumno>&v){
	vector<alumno> apro= lista_aprob(v);
	alumno mejor2;
	for(size_t i=0;i<apro.size();i++) { 
		mejor2=mejor_parcial(v,2);
	}
	return mejor2;
}
	
int main() {
	
	int n;
	cin>>n;
	vector<alumno>v(n);
	
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].codigo;
		cin>>v[i].nombre;
		cin>>v[i].dni;
	}
	
	int codigo;
	cin>>codigo;
	while(codigo!=0){
		int parcial;
		cin>>parcial;
		int nota;
		cin>>nota;
		if(parcial==1){
			v[codigo].nota1=nota;
		}else{
			v[codigo].nota2=nota;
		}
		cin>>codigo;
	}
	
	vector<alumno>apro= lista_aprob(v);
	for(size_t i=0;i<apro.size();i++) { 
		cout<<apro[i].dni<<endl;
		cout<<apro[i].nombre<<endl;
		cout<<apro[i].codigo<<endl;
	}
	
	int parcial;
	cin>>parcial;
	alumno mejor= mejor_parcial(v,parcial);
	cout<<mejor.dni;
	cout<<mejor.nombre;
	
	alumno mjdo= mejor_segundo(v);
	cout<<mjdo.nombre;
	
	return 0;
}

