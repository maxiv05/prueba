#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float x=1, pesosH, horas, salario, salMax=0, salMin=999999999, total=0;
//	pido los datos
	cout<<"ingresar la cantidad a pagar por hora trabajadas: "<<endl;
	cin>>pesosH;
	
//hago un bucle para que ingresen los 25 operarios
	while (x<=25){
		x++;
		cout<<"ingresar horas trabajadas: ";
		cin>>horas;
		if (horas>40){
//			si se mete aca es porque trabajo mas de 40 hs y hay que calcular el 50% mas por hs extras
			salario=40*pesosH+(horas-40)*(pesosH+pesosH*50/100);
			cout<<salario<<endl;
//			suma para saber el total final
			total+=salario;
//			comparacion para saber cual fue el salario min y max
			if (salario>salMax){
				salMax=salario;
			}
			else{
				if(salario<salMin){
					salMin=salario;
				}
			}
		}
		else{
//			si se me te aca es porque trabajo menos de 40 hs y por lo tanto no hay que calcular por hs extras
			salario=horas*pesosH;
			cout<<salario<<endl;
//			suma para saber el total final
			total+=salario;
//			comparacion para saber cual fue el salario max y min
			if (salario>salMax){
				salMax=salario;
			}
			else{
				if(salario<salMin){
					salMin=salario;
				}
			}
		}
	}
//	mostramos todo lo que nos pide
	cout<<"el salario minimo es: "<<salMin<<", y el salario maximo es: "<<salMax<<endl;
	cout<<"la empresa gasto: "<<total<<" en salarios. El promedio del salario por empleado es: "<<total/25;
	return 0;
}

