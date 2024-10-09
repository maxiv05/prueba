#include <iostream>
#include <cmath>
using namespace std;

int separar_anos(int num1, int num2){
	int diferencia= floor((num1-num2)/10000);
	return diferencia;
}

int main() {
	
	int fecha1, fecha2;
	
	cout<<"Ingrese la primera fecha: "<<endl;
	cin>>fecha1;
	cout<<"Ingrese la segunda fecha: "<<endl;
	cin>>fecha2;
	if (fecha1>fecha2){
		int diferencia= separar_anos(fecha1,fecha2);
		cout<<"La diferencia es "<<diferencia<<endl;
	}else {
		int diferencia= separar_anos(fecha2,fecha1);
		cout<<"La diferencia es "<<diferencia<<endl;
	}
	
	return 0;
}

