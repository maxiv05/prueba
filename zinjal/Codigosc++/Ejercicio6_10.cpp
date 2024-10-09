#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int sueldobasico;
	printf ("Escriba el sueldo básico""\n");
	cin >> sueldobasico;
	printf ("Escriba los años de antiguedad""\n");
	int aniosant;
	cin >> aniosant;
	printf ("Escriba el presentismo, 1 si corresponde o 0 si no corresponde cobrar""\n");
	int presentismo;
	cin >> presentismo;
	int aportejub=11;
		int aporteObrasocial=3;
		int aportegremial=1;
		int che;
		printf ("Escriba 0 si no tiene esposa, si tiene escriba 1""\n");
	cin >> che;
	if (che == 1) {
		sueldobasico+30; ///COMO SE HACE ESTOOO////////////////////////////////////////////////////////////////////
	}
	printf ("Escriba el numero de hijos que tiene""\n");
	int hijos;
	cin >> hijos;
	sueldobasico=sueldobasico+(40*hijos);
	sueldobasico=sueldobasico+(1.2*aniosant);
		sueldobasico=sueldobasico-(aportejub*sueldobasico)/100;
		sueldobasico=sueldobasico-(aporteObrasocial*sueldobasico)/100;
		sueldobasico=sueldobasico-(aportegremial*sueldobasico)/100;
		cout << "El  sueldo a cobrar es:" << " " << sueldobasico;
		
		
		
	
	return 0;
}

