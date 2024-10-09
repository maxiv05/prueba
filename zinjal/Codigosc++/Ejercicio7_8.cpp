#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dia_nacimiento, mes_nacimiento, ano_nacimiento;
	int dia_votacion, mes_votacion, ano_votacion;
	
	cout << "Ingrese la fecha de nacimiento (dia mes a�o): ";
	cin >> dia_nacimiento >> mes_nacimiento >> ano_nacimiento;
	
	cout << "Ingrese la fecha de votaci�n (dia mes a�o): ";
	cin >> dia_votacion >> mes_votacion >> ano_votacion;
	
	// Calculamos la edad del estudiante en a�os
	int edad = ano_votacion - ano_nacimiento;
	
	// Verificamos si el estudiante cumpli� 18 a�os antes de la fecha de votaci�n
	if ((mes_votacion < mes_nacimiento) or (mes_votacion == mes_nacimiento and dia_votacion < dia_nacimiento)) {
		edad--;
	}
	
	if (edad >= 18) {
		cout << "El estudiante de primer a�o puede votar en las pr�ximas elecciones.\n";
	} else {
		cout << "El estudiante de primer a�o no cumple con la edad m�nima para votar en las pr�ximas elecciones.\n";
	}
	return 0;
}

