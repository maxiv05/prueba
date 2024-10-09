#include <iostream>
using namespace std;

bool bisiesto(int year) {
	if (year%4==0 and (year%100==0 and year%400==0) or (year%400==0)) {
		return true;
	} 
	return false;
}
pair<bool,int> fecha_correcta(int fecha) {
	int mes=(fecha/100)%100;
	pair<bool,int>p;
	int dia=(fecha%100);
	if (mes<=12 and mes!=0 and mes>0) {
		int max_mes;
		if (mes==2) {
			int anio=(fecha/10000);
			if (bisiesto(anio)) {
			 max_mes = 29;
			 if (dia<=max_mes){
				p.first=true;
				p.second=2;
			 }
			} else{
				max_mes = 28;
				if (dia<=max_mes){
					p.first=true;
					p.second=2;
				}
			}
		} else {
			if (mes%2==0) max_mes = 31;
			else          max_mes = 30;
		}
		if (dia<=max_mes and dia!=0 and dia>0){
			p.first = true;
			p.second=2;
		} else{
			p.first = false;
			p.second = 1;
		}
	} else { 
		p.first=false;
		p.second=0;
	}  
	return p;
}
int main(int argc, char *argv[]) {
	int year;
	cout << "Ingrese el año" << endl;
	cin >> year;
	if (bisiesto(year)){
		cout << "Es bisiesto" << endl;
	} else{
		cout << "No es bisiesto" << endl;
	}
	int fecha;
	cout << "Ingrese la fecha en formato AAAAMMDD" << endl;
	cin >> fecha;
	pair<float,bool> p=fecha_correcta(fecha);
	if (p.first==true and p.second==1){
		cout << "La fecha es correcta" << endl;
	} else{
		pair<float,bool> p=fecha_correcta(fecha);
		if(p.second==0){
			cout << "La fecha es incorrecta" << endl;
			cout << "El mes es incorrecto." << endl;
		} else{
			cout << "La fecha es incorrecta" << endl;
			cout << "El día es incorrecto." << endl;
		}
	}
	return 0;
}

