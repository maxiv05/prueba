#include <iostream>
#include <vector>
#include <matrix>
using namespace std;

struct enteros {
	int dato, cantidad;
};
// {1 34 52 1 3 4}
vector<enteros> funcion(const vector<enteros> &x) {
	vector<enteros> resultado;
	for(size_t i=0; i<x.size(); i++) {
		// hay que recorrer el vector resultado y ver si x[i] no esta repetido
		bool repetido=false;
		for(size_t j=0;j<resultado.size();j++) { 
			if (resultado[j].dato==x[i]) {
				repetido=true;
			}
		}
		
		if (repetido==false) {
			enteros c;
			c.dato=x[i];
			c.cantidad=0;
			for(size_t j=0;j<x.size();j++) { 
				if (x[j]==x[i]) {
					c.cantidad++;
				}
			}
			
			resultado.push_back(c);
		}
		
	}
	
	return resultado;
}
int main() {
	int y;
	cin >> y;
	vector<int> x(y);
	vector<enteros> g=funcion(x);
	for(size_t i=0; i<g.size();i++) {
		cout << "(" << g.dato << "," << g.cantidad << ")" << endl; 
	}
	return 0;
}

