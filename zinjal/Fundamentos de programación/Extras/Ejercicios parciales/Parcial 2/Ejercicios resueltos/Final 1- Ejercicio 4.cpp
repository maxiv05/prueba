#include <iostream>
#include <vector>
using namespace std;

struct autos{
	string marca;
	string modelo;
	int disenio;
	int confort;
	int performance;
	int seguridad;
	int precio;
};

float promedio (const vector<autos>&v){
	float suma=0;
	for(size_t i=0;i<v.size();i++) { 
		suma+=v[i].disenio+v[i].confort+v[i].performance+v[i].seguridad+v[i].precio;
	}
	float promedio= suma/5;
	return promedio;
}

pair<autos, autos> dos_mejores(const vector<autos>&v){
	autos mayor={"","",0,0,0,0,0}, mayor2={"","",0,0,0,0,0};
	for(size_t i=0;i<v.size();i++) { 
		if(promedio(v)>((mayor.disenio+mayor.confort+mayor.performance+mayor.seguridad+mayor.precio)/5)){
			mayor2=mayor;
			mayor=v[i];
		}else if(promedio(v)>((mayor2.disenio+mayor2.confort+mayor2.performance+mayor2.seguridad+mayor2.precio)/5)){
			mayor2=v[i];
		}
	} return {mayor, mayor2};
}

int main() {
	
	vector<autos>v(50);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].marca;
		cin>>v[i].modelo;
		cin>>v[i].disenio;
		cin>>v[i].confort;
		cin>>v[i].performance;
		cin>>v[i].seguridad;
		cin>>v[i].precio;
	}
	
	return 0;
}

