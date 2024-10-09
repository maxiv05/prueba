#include <iostream>
using namespace std;

int main() {
	int dato;
	char opcion;
	do{
		cout<<"Calculos"<<endl;
		cout<<"A- Ingresar nuevo dato."<<endl;
		cout<<"B- Calcular el doble del dato."<<endl;
		cout<<"C- Determinar si es par."<<endl;
		cout<<"D- Determinar si es primo."<<endl;
		cout<<"E- Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		opcion=toupper(opcion);
		
		cout<<endl;	
		
		switch(opcion){
		case 'A':
			cout<<"Ingrese el dato"<<endl;
			cin<<dato;
			break;
		case 'B':
			cout<<"Doble: "<<2*dato<<endl;
			break;
		case 'C':
			if (dato%2==0)
				cout<<"Es par"<<endl;
			else
				cout<<"Is impar"<<endl;
			break;
		case 'D':
			{bool es_primo=true;
			for(int i=2; i<=sqrt(dato); i++){
				if (dato%i==0){
					es_primo=false;
					break;
				}
			}
			if (es_primo){
				cout<<"Es primo"<<endl;
			}else 
				cout<<"No es primo"<<endl;
			}
			break;
		case 'E':
			break;
		}
		default:
			cout<<"Opción incorrecta"<<endl;
		
	} while(opcion!='E') 
	return 0;
}

