#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int fecha1, fecha2;
	string nombre1, nombre2;
	int ano1, ano2, pri1, pri2, mes1, mes2, seg1, seg2, dia1, dia2;
	
	cout<<"Ingrese su nombre"<<endl;
	cin>> nombre1;
	cout<<"Ingrese su fecha de nacimiento"<< endl;
	cin>>fecha1;
	
	cout<<"Ingrese el otro nombre"<<endl;
	cin>> nombre2;
	cout<<"Ingrese la otra fecha de nacimiento"<< endl;
	cin>>fecha2;
	
	//Calculo fecha 1;
	ano1=floor(fecha1/10000);
	pri1=fecha1%10000;
	mes1= floor(pri1/100);
	seg1=fecha1%100;
	dia1=floor(seg1);
	
	//Calculo fecha2;
	ano2=floor(fecha2/10000);
	pri2=fecha2%10000;
	mes2= floor(pri2/100);
	seg2=fecha2%100;
	dia2=floor(seg2);
	
	cout << nombre1<< ".........:" <<dia1<<"/"<<mes1<<"/"<<ano1<<endl;
	cout << nombre2<< ".........:" <<setfill(".")<<dia2<<"/"<<mes2<<"/"<<ano2<<endl;
	
	return 0;
}

