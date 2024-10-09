#include <iostream>
#include <vector>
using namespace std;
int buscar(vector<int> v) {
	for (size_t i=0; i<v.size(); i++) {
		if (v[i]==5) return i;
	}
}
int eliminar(const vector<int> &v) {
	for (size_t i=pos_a_eliminar_; i<v.size(); i++) {
		v[i]=v[i+1];
	}
	return v;
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
	int i=0;
	
//	while (i<v.size()) {
//		if (v[i]==5) {
//			int pos_a_eliminar_ = i;
//			for (size_t i=pos_a_eliminar_; i<v.size(); i++) {
//				v[i]=v[i+1];
//			}
//		}
//		i++;
//	}
	
	for (size_t i=0; i<v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}

