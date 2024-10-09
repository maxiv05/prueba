#include <iostream>
#include <vector>
using namespace std;

struct alumno{
	string apellido;
	string nombre;
	int dni;
	int aprobadas;
	int aplazos;
	int ingreso;
};


vector<alumno> acceden (const vector<alumno>&v){
	vector<alumno>aux;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].aprobadas>22 and v[i].aplazos<=2 and v[i].ingreso>=2021){
			aux.resize(aux.size()+1);
			aux[i]=v[i];
		}
	} return aux;
}
	
pair<alumno, alumno> mayores (const vector<alumno>&aux){
	alumno mayor={"","",0,0,0,0}, mayor2={"","",0,0,0,0};
	for(size_t i=0;i<aux.size();i++) { 
		if(aux[i].aprobadas/38>mayor.aprobadas/38){
			mayor2=mayor;
			mayor=aux[i];
		}else if (aux[i].aprobadas/38>mayor.aprobadas/38){
			mayor2=aux[i];
		}
	} return {mayor, mayor2};
}

int main() {
	
	int n;
	cin>>n;
	vector<alumno>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].apellido;
		cin>>v[i].nombre;
		cin>>v[i].dni;
		cin>>v[i].aprobadas;
		cin>>v[i].aplazos;
		cin>>v[i].ingreso;
	}
	
	vector<alumno>aux= acceden (v);
	for(size_t i=0;i<aux.size();i++) { 
		cout<<v[i].nombre;
		cout<<v[i].aprobadas/38;
		cout<<v[i].dni;
	}
	
	pair<alumno, alumno> ganadores= mayores(aux);
	cout<<ganadores.first.nombre;
	cout<<ganadores.second.nombre;
	
	return 0;
}

