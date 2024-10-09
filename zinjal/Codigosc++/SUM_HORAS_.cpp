#include <iostream>
using namespace std;
struct tiempo {
	int horas;
	int minutos;
	int segundototal;
};
tiempo sum(tiempo uno,tiempo_2 dos) {
	tiempo x;
	if (uno.segundo1+dos.segundo2==60){
		x.minutototal++;
	} else {
		if(uno.segundo1+dos.segundo2>=60) {
			x.segundototal=uno.segundo1+dos.segundo2;
			x.segundototal=x.segundototal-60;
		}
	}
	if (uno.minuto1+dos.minuto2==60) {
		x.horatotal++;
	} else{
		if(uno.minuto1+dos.minuto2>=60) {
			x.minutototal=uno.minuto1+dos.minuto2;
			x.minutototal=x.minutototal-60;
		}
	}
	x.horatotal=uno.hora1+dos.hora2;
	return x;
}
int main(int argc, char *argv[]) {
	tiempo uno;
	tiempo_2  dos;
	
	cin >> uno.hora1 >> uno.minuto1 >> uno.segundo1;
	cin >> dos.hora2 >> dos.minuto2 >> dos.minuto2;
	suma x=sum(uno,dos);
	cout << "La suma de los tiempos es: " << endl;
	cout << x.horatotal << ":" << x.minutototal << ":" << x.segundototal << endl;
	return 0;
}

