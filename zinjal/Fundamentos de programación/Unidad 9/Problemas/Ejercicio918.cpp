#include <iostream>
#include <vector>
using namespace std;

struct paciente{
	string nombre;
	int dni;
	string diagnostico;
	int habitacion;
};

int main() {
	
	int n;
	cin>>n;
	vector<paciente>v(n);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].nombre;
		cin>>v[i].dni;
		cin>>v[i].diagnostico;
		cin>>v[i].habitacion;
	}
	
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].nombre=="Cosme Fulanito"){
			cout<<v[i].habitacion;
			break;
		}
	}
	
	int contador=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].diagnostico=="Apendicitis"){
			contador++;
		}
	}
	
	cout<<contador;
	
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].habitacion==101){
			cout<<v[i].nombre;
			cout<<v[i].dni;
			cout<<v[i].diagnostico;
		}
	}
	
	return 0;
}

