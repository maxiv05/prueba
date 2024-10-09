#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float kmi, kmf, nafta, consumo, descuento;
	
	cout<<"Ingrese el kilometro inicial"<<endl;
	cin>>kmi;
	cout<<"Ingrese el kilometro final"<<endl;
	cin>>kmf;
	cout<<"Ingrese el consumo"<<endl;
	cin>>consumo;
	cout<<"Ingrese el precio de la nafta por litro"<<endl;
	cin>>nafta;
	cout<<"Ingrese el porcentaje de descuento"<<endl;
	cin>>descuento;
	
	float kmt;
	kmt= kmf-kmi;
	float litros;
	litros= consumo*kmt;
	float costo;
	costo=litros*nafta;
	float total;
	total=costo*descuento/100;
	
	cout<<"El costo es "<< costo-total;
	
	return 0;
}

