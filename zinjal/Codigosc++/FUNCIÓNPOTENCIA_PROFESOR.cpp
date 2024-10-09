#include <iostream>
using namespace std;

//void mostrar(const vector<int> &v) {
//	for(size_t i=0;i<v.size();i++)
//		cout << v[i] <<  ' ';
//	cout << endl;
//}

//int potencia (int base,int exponente) {
//	int res=1;
//	for (int i=0; i<exponente; i++){
//		res *= base;
//	}
//	return res;
//}

int potencia (int base,int exponente) {
	if (base==0) return 1;
	return base*potencia(base,exponente-1);
}

int main(int argc, char *argv[]) {
	int base,exponente;
	cin >> base >> exponente;
	float res= potencia(base,exponente);
	cout << base << "^" << exponente << res << endl;
	return 0;
}

