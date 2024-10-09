#include <iostream>
#include <cmath>
using namespace std;
bool raicesreales(float a, float b, float c) {
	float discriminante=(b*b)-4*a*c;
	if (discriminante>=0) {
		return true;
	}
	return false;
}
pair<float,float> calculo_R_REALES(float a, float b, float c) {
	pair<float,float>p;
	p.first=(-b+sqrt((b*b)-4*a*c))/(2*a);
	p.second=(-b-sqrt((b*b)-4*a*c))/(2*a);
	return p;
}
pair<float,float> calculoraicescomplejas(float a, float b, float c) {
	pair<float,float>p;
	int discriminante=(b*b)-4*a*c;
	p.first=-b/(2*a);
	p.second= sqrt(-discriminante)/(2*a);
	return p;
}
int main(int argc, char *argv[]) {
	float a,b,c;
	cout << "Ingrese el valor para a,b y c" << endl;
	cin >> a >> b >> c;
	if (raicesreales(a,b,c)) {
		pair<float,float> p=calculo_R_REALES(a,b,c);
		cout << "Raiz real 1:" << p.first << endl;
		cout << "Raiz real 2:" << p.second << endl;
	} else{
		pair<float,float> p=calculoraicescomplejas(a,b,c);
		cout << "Raiz compleja 1:" << p.first << "+" << p.second << "i" << endl;
		cout << "Raiz compleaja 2:" << p.first << "-" << p.second << "i" << endl;
	}
	return 0;
}

