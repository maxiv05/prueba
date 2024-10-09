#include <iostream>
#include <vector>
using namespace std;

struct alumno{
	string apellido;
	string nombre;
	int dni;
	int fecha;
	float promedio;
	int puntaje;
};

void carga (vector<alumno>&v){
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].apellido;
		cin>>v[i].nombre;
		cin>>v[i].dni;
		cin>>v[i].fecha;
		cin>>v[i].promedio;
		cin>>v[i].puntaje;
	}
}
	
vector<alumno> filtrar (const vector<alumno>&v){
	vector<alumno>filtro;
	for(size_t i=0;i<v.size();i++) { 
		if((20230731-v[i].fecha)/10000<=30 and v[i].puntaje>600){
			filtro.resize(filtro.size()+1);
			filtro[i]=v[i];
		}
	} return filtro;
}
	
pair<alumno,alumno> ganadores (const vector<alumno>&filtro){
	alumno mayor={"","",0,0,0,0}, mayor2={"","",0,0,0,0,};
	for(size_t i=0;i<filtro.size();i++) { 
		if(filtro[i].promedio>mayor.promedio or (filtro[i].promedio==mayor.promedio and filtro[i].puntaje>mayor.puntaje)){
			mayor2=mayor;
			mayor=filtro[i];
		}else if (filtro[i].promedio>mayor2.promedio or (filtro[i].promedio==mayor2.promedio and filtro[i].puntaje>mayor2.puntaje)){
			mayor2=filtro[i];
		}
	} return {mayor, mayor2};
}

int main() {
	
	int n;
	cin>>n;
	vector<alumno>v(n);
	
	carga(v);
	
	vector<alumno> filtro= filtrar(v);
	pair<alumno, alumno> ganaron= ganadores(filtro);
	cout<<ganaron.first.nombre<<endl;
	cout<<ganaron.second.nombre<<endl;
	
	
	
	return 0;
}

