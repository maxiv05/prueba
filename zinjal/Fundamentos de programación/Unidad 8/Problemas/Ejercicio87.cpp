#include <iostream>
using namespace std;

string condicion(float p1, float r1, float p2, float r2, int asistencia){
	int n1= p1;
	if (r1>p1){
		n1=r1;
	}
	int n2= p2;
	if (r2>p2){
		n2=r2;
	}
	if (n1>=80 and n2>=80 and asistencia>=80){
		return "Promociona";
	}
	if (n1>=50 and n2>=50 and asistencia>=60){
		return "Regulariza";
	}
	return "Libre";
}

int main() {
	
	int alumnos;
	cout<<"Ingrese la cantidad de alumnos"<<endl;
	cin>>alumnos;
	
	int contador_regular=0;
	int contador_promociona=0;
	
	for(int i=0; i<alumnos; i++){
		int p1, r1, p2, r2, asistencia;
		cout<<"Ingrese la nota de cada parcial y su recuperatorio"<<endl;
		cin>> p1>>r1>>p2>>r2>>asistencia;
		
		string finalizacion= condicion(p1, r1, p2, r2, asistencia);
		if (finalizacion=="Promociona"){
			contador_promociona= contador_promociona+1;
		} else{
			if (finalizacion=="Regulariza"){
			contador_regular=contador_regular+1;
		    }
		}
	}
	
	cout<<"La cantidad de alumnos que promociona es "<<contador_promociona;
	cout<<"La cantidad de alumnos que regulariza es "<<contador_regular;
	
	return 0;
}

