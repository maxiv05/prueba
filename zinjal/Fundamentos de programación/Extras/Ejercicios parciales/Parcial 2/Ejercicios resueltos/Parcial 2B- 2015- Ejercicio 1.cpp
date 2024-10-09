#include <iostream>
using namespace std;

struct fecha{
	int anio;
	int mes;
	int dia;
};

int calcular_edad(fecha f_nac, fecha f_hoy){
	float primero= f_nac.anio*10000+f_nac.mes*1000+f_nac.dia;
	float segundo=f_hoy.anio*10000+f_hoy.mes*1000+f_hoy.dia;
	return(segundo-primero)/10000;
}

int main() {
	
	return 0;
}

