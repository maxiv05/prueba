#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	float a,b,c;
	cout << "Ingrese los valores de a,b y c.";
	cin >> a;
	cin >> b;
	cin >> c;
	float discirminante = (b*b)-4*a*c ;
	if (discirminante<0) {
		float divisor=2*a;
		float parteimaginaria=sqrt(-discirminante)/divisor;
		float partereal=-b/divisor;
		cout << "raiz 1: " <<  partereal << '+' << "sqrt" << parteimaginaria << 'i' << endl;
		cout << "raiz 2: " <<  partereal << '-' << "sqrt" << parteimaginaria << 'i' << endl;
	}else{
		int raiz_1;
		int raiz_2;
		
		raiz_1= (-b+sqrt((b*b)-4*a*c))/(2*a);
		raiz_2= (-b-sqrt((b*b)-4*a*c))/(2*a);
		cout << raiz_1 << endl;
		cout << raiz_2 << endl;
	}
	return 0;
}

