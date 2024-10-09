#include <iostream>
#include <vector>
using namespace std;

struct fecha{
	int dia;
	int mes;
	int anio;
};

int edad(fecha f_nac, fecha f_hoy){
	float primero= f_nac.anio*10000+f_nac.mes*1000+f_nac.dia;
	float segundo=f_hoy.anio*10000+f_hoy.mes*1000+f_hoy.dia;
	return(segundo-primero)/10000;
}
	
struct socio{
	string nombre;
	string apellido;
	int dni;
	string categoria;
	fecha fechanac;
};
	
void actualizar (vector<socio>&v, fecha f_hoy){
	for(size_t i=0;i<v.size();i++) { 
		int e=edad(v[i].fechanac, f_hoy);
		if(e<=12){
			v[i].categoria="Infantiles";
		}else if (e<=18){
			v[i].categoria="Juveniles";
		}else {
			v[i].categoria="Mayores";
		}
	}
}
	
	
int main() {

	int n;
	cin>>n;
	vector<socio>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].nombre;
		cin>>v[i].apellido;
		cin>>v[i].dni;
		cin>>v[i].categoria;
		cin>>v[i].fechanac.dia;
		cin>>v[i].fechanac.mes;
		cin>>v[i].fechanac.anio;
	}
	
	
	fecha fhoy;
	cin>>fhoy.dia;
	cin>>fhoy.mes;
	cin>>fhoy.anio;
	
	actualizar(v, fhoy);
	
	float infantiles;
	cin>>infantiles;
	float juveniles;
	cin>>juveniles;
	float mayores;
	cin>>mayores;
	
	float total;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].categoria=="infantiles"){
			total+=infantiles;
		}else if(v[i].categoria=="juveniles"){
			total+=juveniles;
		}else{
			total+=mayores;
		}
	}
	
	cout<<total;
	
	return 0;
}

