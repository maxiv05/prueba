#include <iostream>
#include <vector>
using namespace std;

struct datos{
	string nombre;
	string contrasenia;
};

void validar_contrasenia (string contrasenia){
	if(contrasenia=="1234" or contrasenia=="asdf" or contrasenia=="pass" or contrasenia==" "){
		cout<<"contraseña invalida, ingrese una nueva";
		cin>>contrasenia;
	}
}

int main() {
	
	vector<datos>v;
	
	string nombre;
	cin>>nombre;
	while(nombre!="ZZZ"){
		v.resize(v.size()+1);
		v[v.size()-1].nombre;
		string contrasenia;
		cin>>contrasenia;
		validar_contrasenia(contrasenia);
		v[v.size()-1].contrasenia;
		cin>>nombre;
	}
	
	cout<<"Por favor, identifiquese";
	cin>>nombre;
	string contrasenia;
	cin>>contrasenia;
	
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].nombre==nombre and v[i].contrasenia==contrasenia){
			cout<<"Bienvenido al sistema "<<v[i].nombre;
		} else if (v[i].nombre==nombre){
			int contador=1;
			while(contador<6){
				cout<<"Ingrese nuevamente la contrasenia"<<endl;
				cin>>contrasenia;
				contador++;
				if(v[i].contrasenia==contrasenia){
					cout<<"Bienvenido al sistema"<<v[i].nombre;
				}
			}
			cout<<"Fuera bicho";
		}
	}
	
	
	
	return 0;
}

