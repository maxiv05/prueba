#include <iostream>
#include <cmath>
using namespace std;
struct valores{
	float v1;
	float v2;
};
valores res;
valores ans;
bool raicesreales(float a, float b, float c) {
	float discriminante=(b*b)-4*a*c;
	if (discriminante>=0) {
		return true;
	}
	return false;
}
valores calculo_R_REALES(float a, float b, float c) {
	res.v1=(-b+sqrt((b*b)-4*a*c))/(2*a); /// a=1 b=5 c=6<------------- PROBAR CON ESOS VALORES,DA MAL, TIENE QUE DAR: -2 Y -3
	res.v2=(-b-sqrt((b*b)-4*a*c))/(2*a);
	return res;
}
valores calculoraicescomplejas(float a, float b, float c) {
	int discriminante=(b*b)-4*a*c;
	ans.v1=-b/(2*a);
	ans.v2= sqrt(-discriminante)/(2*a);
	return ans;
}
int main() {
	float a,b,c;
	cout << "Ingrese el valor para a,b y c" << endl;
	cin >> a >> b >> c;
	if (raicesreales(a,b,c)) {
		calculo_R_REALES(a,b,c);
		cout << "Raiz real 1:" << res.v1 << endl;
		cout << "Raiz real 2:" << res.v2<< endl;
	} else{
		calculoraicescomplejas(a,b,c);
		cout << "Raiz compleja 1:" << ans.v1 << "+" << ans.v2 << "i" << endl;
		cout << "Raiz compleaja 2:" << ans.v1 << "-" << ans.v2 << "i" << endl;
	}
	return 0;
}

