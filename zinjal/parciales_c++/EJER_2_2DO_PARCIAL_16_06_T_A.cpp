#include <iostream>
#include <vector>
using namespace std;
struct archivos {
	string nombre;
	unsigned int nlineas;
	unsigned int nfunct;	
};
vector<int> promlineas(const vector<archivos> &v,int n) {
	vector<int> x(n);
	for(size_t i=0; i<v.size(); i++) {
		x[i]=v[i].nlineas-v[i].nfunct;
	}
	return x;
}
pair<string,string> mayor(const vector<archivos> &v) {
	pair<string,string> p;
	int mayor1=0;
	int mayor2=0;
	for(size_t i=0; i<v.size();i++) {
		if(v[i].nlineas>mayor1) {
			mayor2=mayor1;
			p.second=p.first;
			mayor1=v[i].nlineas;
			p.first=v[i].nombre;
		} else{
			if(v[i].nlineas>mayor2) {
				mayor2=v[i].nlineas;
				p.second=v[i].nombre;
			}
		}
	}
	return p;
}
pair<int,int> cantlinfunct(const vector<archivos> &v) {
	pair<int,int> k;
	for(size_t i=0; i<v.size(); i++) {
		k.first+=v[i].nlineas;
		k.second+=v[i].nfunct;
	}
	return k;
}
int main() {
	int n;
	cin >> n;
	vector<archivos> v(n);  ///for especial
	vector<int>g=promlineas(v,n);
	for(size_t i=0; i<g.size();i++) {
		cout << "El promedio de líneas por la función " << i << " es: " << g[i] <<endl;
	}
	pair<string,string> p=mayor(v);
	cout << "Los nombres de los archivos con más líneas son: " << p.first << "y" << p.second << endl;
	pair<int,int> k=cantlinfunct(v);
	cout << "las cantidades totales de líneas sumando todos los archivos es de: " << k.first << endl;
	cout << "las cantidades totales de funciones sumando todos los archivos es de: " << k.second << endl;
	return 0;
}

