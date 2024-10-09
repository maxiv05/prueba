#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float pricegas;
	printf ("Escriba el precio de la nafta""\n");
	cin >> pricegas;
	printf ("Escriba el kilometraje inicial""\n");
	int kil_i;
	cin >> kil_i;
	printf ("Escriba el kilometraje final""\n");
	int kil_f;
	cin >> kil_f;
	int kil_hechos=kil_f-kil_i;
	printf ("Escriba el gasto de nafta por kilómetro""\n");
	float gastoporkm;
	cin >> gastoporkm;
    printf ("Escriba el descuento""\n");
	float descuento;
	cin >> descuento;
	int gastototaldelviaje=(gastoporkm*kil_hechos)*pricegas;
	int gastototaldelviajedesc=(gastoporkm*kil_hechos)*(pricegas*descuento)/100;
	cout << "El costo del viaje es:" << gastototaldelviaje << "U$D."; ///¿¿¿¿¿¿¿porque si pongo numeros mas altos me aparece en notacion cientifica?????????????
	cout << "El costo del viaje con descuento es:" <<  gastototaldelviajedesc << "U$D.";
	return 0;
}

