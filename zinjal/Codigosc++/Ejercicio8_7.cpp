#include <iostream>
using namespace std;
bool analisisdecondicion(int parcial_1,int rec_1,int parcial_2,int rec_2,int asistencia) {
	if ((parcial_1>=80 or rec_1>=80) and (parcial_2>=80 or rec_2>=80) and asistencia>=80){
		return true;
	} 
	return false;
}
int main(int argc, char *argv[]) {
	///Recibo los datos del alumno
	int parcial_1,rec_1,parcial_2,rec_2,asistencia;
	cout << "Ingrese la nota del parcial_1 y del recuperatorio 1:" << endl;
	cin >> parcial_1 >> rec_1;
	cout << "Ingrese la nota del parcial_2 y del recuperatorio 2:" << endl;
	cin >> parcial_2 >> rec_2;
	cout << "Ingrese la asistencia:" << endl;
	cin >> asistencia;
	analisisdecondicion( parcial_1, rec_1,parcial_2, rec_2,asistencia);
	if (analisisdecondicion( parcial_1, rec_1, parcial_2, rec_2,asistencia)) {
		cout << "El alumno está en la condición de promoción!" << endl;
	} else{
		cout << "El alumno está en la condición de regularidad!" << endl;
	} ///HASTA             ACA                     LA                  A //////////////////////////////////////////////////////////////////////////////////
	
	
	int Nalumnos;
	cout << "Ingrese el número de alumnos" << endl;
	cin >> Nalumnos;
	int Numregulares=0, Numpromocionados=0;
	for (int i=1; i<=Nalumnos; i++){
		cout << "Ingrese la nota del parcial_1 y del recuperatorio 1:" << endl;
		cin >> parcial_1 >> rec_1;
		cout << "Ingrese la nota del parcial_2 y del recuperatorio 2:" << endl;
		cin >> parcial_2 >> rec_2;
		cout << "Ingrese la asistencia:" << endl;
		cin >> asistencia;
		analisisdecondicion( parcial_1, rec_1,parcial_2, rec_2,asistencia);
		if (analisisdecondicion(parcial_1, rec_1, parcial_2, rec_2, asistencia)){
			Numpromocionados=Numpromocionados+1;
		} else{
			Numregulares=Numregulares+1;
		}
	}
	return 0; 
}

