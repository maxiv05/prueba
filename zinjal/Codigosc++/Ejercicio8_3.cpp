#include <iostream>
using namespace std;
bool elecciones(int fecha_nac, int fecha_hoy) {
	 int year =(fecha_hoy-fecha_nac)/10000;
	if (year>=18) {
		return true;
	}
	return false;
}
int main(int argc, char *argv[]) {
	int fecha_nac;
	int fecha_hoy;
	 cout << "ingrese la primera fecha y la segunda en formato 'aaammdd':";
	 cin >> fecha_hoy;
	 cin >> fecha_nac;
	 if (elecciones(fecha_nac,fecha_hoy)) {
		cout << "Vota";
	 } else {
		 cout << "NO vota";
	 }
	 
	 
	return 0;
}

