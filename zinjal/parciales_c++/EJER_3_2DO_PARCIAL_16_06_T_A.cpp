#include <iostream>
#include <vector>
#include <matrix>
using namespace std;
vector<int> nroquerindieron(const matrix<string> &m,int n) {
	vector<int> x(4,0);
	for(size_t i=0; i<4; i++) {
		for(size_t k=0; k<n;k++) {
			if(m[k][i]!="No rindió") {
				x[i]++;
			}
		}
	}
	return x;
}
vector<int> norindieron(const matrix<string> &m, int n) {
	vector<int> t;
	int contador=0;
	for(size_t i=0; i<n; i++) {
		for(size_t k=0; i<4; i++) {
			if(m[i][k]=="No rindió") {
				contador++;
			}
			if (contador==4) {
				t.push_back(i);
			}
		} 
	}
	return t;
}
int nroevdoc(const matrix<string> &m, int n,string nombredoc) {
	int contador=0;
	for(size_t i=0; i<4; i++) {
		for(size_t k=0; k<n; k++) {
			if (m[k][i]==nombredoc) {
				contador++;
			}
		}
	}
	return contador;
}
int main() {
	int n; 
	cin >> n;
	matrix<string> m(n,4,"No rindió");
	int nroal;
	int nroeva;
	cin >> nroal;
	while (nroal!=0) {
		cin >> nroeva;
		cin.ignore();
		getline(cin,m[nroal][nroeva]);
		cin >> nroal;
	}
	vector<int> g=nroquerindieron(m,n);
	for (size_t i=0; i<g.size(); i++) {
		cout << "La evaluación " << i << " la rindieron: " << g[i] << " alumnos." << endl;
	}
	vector<int> u=norindieron(m,n);
	cout << "Los alumnos que no rindieron ninguna evaluación son los alumnos " << endl;
	for(size_t i=0; i<u.size();i++) {
		cout << u[i] << ", ";
	}
	string nombredoc;
	cin >> nombredoc;
	int nro=nroevdoc(m,n,nombredoc);
	cout << "El número de evaluaciones que corrigió el docente " << nombredoc << "es: " << nro << endl;
	return 0;
}
