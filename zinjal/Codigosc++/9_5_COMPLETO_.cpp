#include <iostream>
#include <vector>
using namespace std;
int buscar(vector<int> v) {
	for (size_t i=0; i<v.size(); i++) {
		if (v[i]==5) return i;
	}
	return -1;
}
void eliminar(vector<int>& v,int pos_a_eliminar) {
	for (size_t i=pos_a_eliminar; i<v.size(); i++) {
		v[i]=v[i+1];
	}
	v.pop_back();
}
int main() {
	int n;
	cout << "Ingrese la cantidad de valores a ingresar" << endl;
	cin >> n;
	vector<int> v(n);
	cout << "Ingrese los valores" << endl;
	for (size_t i=0; i<v.size(); i++) {
		cin >> v[i];
	}
	cout << "Los valores dados son:" << endl;
	for (size_t i=0; i<v.size(); i++) {
		cout << v[i] << endl;
	}
	cout << "Los valores sin el número 5 son:" << endl;
	int pos_a_eliminar=buscar(v);
	if (pos_a_eliminar != -1) {
		eliminar(v, pos_a_eliminar);
	} else {
		cout << "El valor 5 no se encontró en el vector." << endl;
	}
	for (size_t i=0; i<v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}
