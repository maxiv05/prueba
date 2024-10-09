


#include<iostream>

using namespace std;

int main(){
	
	float practica,teorica,participacion,notafinal=0;

	cout<<"digite la nota de practica:";cin>>practica;
	cout<<"digite la nota de teorica:";cin>>teorica;
	cout<<"digite la nota de participacion:";cin>>participacion;

	practica = practica *0.30; //practica *=0.30
	teorica *=0.60;
	participacion *=0.10;
	notafinal= practica +teorica +participacion;
	cout<<"\nla nota final es:"<<notafinal<<endl;
	return 0;
}
