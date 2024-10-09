#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dia_nacimiento, mes_nacimiento, ano_nacimiento;
	int dia_votacion, mes_votacion, ano_votacion;
	
	cout << "Ingrese la fecha de nacimiento (dia mes año): ";
	cin >> dia_nacimiento >> mes_nacimiento >> ano_nacimiento;
	
	cout << "Ingrese la fecha de votación (dia mes año): ";
	cin >> dia_votacion >> mes_votacion >> ano_votacion;
	
	// Calculamos la edad del estudiante en años
	int edad = ano_votacion - ano_nacimiento;
	
	// Verificamos si el estudiante cumplió 18 años antes de la fecha de votación
	if ((mes_votacion < mes_nacimiento) or (mes_votacion == mes_nacimiento and dia_votacion < dia_nacimiento)) {
		edad--;
	}
	
	if (edad >= 18) {
		cout << "El estudiante de primer año puede votar en las próximas elecciones.\n";
	} else {
		cout << "El estudiante de primer año no cumple con la edad mínima para votar en las próximas elecciones.\n";
	}
	return 0;
}

