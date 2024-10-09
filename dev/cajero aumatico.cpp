
#include<iostream>

using namespace std;

int main(){
			 char pregunta;
			 int saldo_inicial= 1000,opc;
			 float extra,saldo=0,retiro;
			 cout<<"\t\t\t\t\t bienvenido al cajero automatico "<<endl;
 			  cout<<"\t\t\t\t\t saldo actual:1000 "<<endl;
			  cout<<"1. ingresar dinero a la cuenta "<<endl;
			 cout<<"2. retirar dinero de la cuenta"<<endl;
			 cout<<"3. salir "<<endl;
			 cout<<"opcion: ";cin>>opc;
			 
			 
			 switch(opc){
			 	case 1: 
			 	cout<<"digite la cantidad de dinero a ingresar: ";
			 	cin>>extra;
			 	saldo=saldo_inicial + extra;
			 	cout<<"dinero en cuenta: "<<saldo<<endl;
			 	cout<<" ¿desea retirar dinero?, presione 1 si quiere, de lo contrario presione 2: ";cin>>pregunta;
			 	if (pregunta=1){
				 cout<<"digite el monto a retirar: ";cin>>retiro;
			}
				saldo=saldo_inicial + extra;
			 	 if( retiro >saldo ){
			 		cout<<"No tiene esa cantidad de dinero disponible";
				 }
				 else{
				 	saldo= saldo - retiro;
				 	cout<<"dinero en cuenta: "<<saldo;break;
				 }
			
			 	case 2:
			 	cout<<"digite el monto a retirar: ";cin>>retiro;
			 	if( retiro > saldo_inicial ){
			 		cout<<"No tiene esa cantidad de dinero disponible";
				 }
				 else{
				 	saldo= saldo_inicial - retiro;
				 	cout<<"dinero en cuenta: "<<saldo;
				 }
			 	case 3: break;
			 	
			 	
			 }
			 
			 
			 
			 
			 
			 
			 
	return 0;
}
