#include <iostream>
#include <matrix>
#include <vector>
using namespace std;
bool insertar(vector<int> &v, int elemento) {
	bool condicion=true;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]==elemento) { 
			condicion=false;
		} else{
			condicion=true;
			break;
		}
	}
	int pos;
	v.push_back(0);
	if (condicion==true) {
	for(size_t i=v.size()-1; i>pos; i--) {
		v[i+1]=v[i];
	}
	v[pos]=elemento;
	return true;
	} else {
		return false;
	}
	
}
int main() {
	vector<int> v(10);
	for(size_t i=0;i<v.size();i++) { 
		cin >> v[i];
	}
	int elemento;
	cin >> elemento;
	insertar(v,elemento);
	if(insertar(v,elemento)) {
		cout << "Si, se hizo la inserción." << endl;
	} else {
		cout << "No se hizo la inserción." << endl;
 	}
	for(size_t i=0; i<v.size();i++) {
		cout << v[i] << endl;
	}
	return 0;
}

