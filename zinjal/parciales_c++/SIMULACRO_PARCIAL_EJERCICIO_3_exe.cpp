#include <iostream>
#include <vector>

using namespace std;
struct datos {
	string nombre;
	string raza;
	float peso;
	int edad;
	
}; 
vector<string> funcion(const vector<datos> &v,string raza) {
	vector<string> l;
	for(size_t i=0; i<v.size(); i++) {
		if(v[i].nombre==raza) {
			l.push_back(v[i].nombre);
		}
	}
	return l;
}
vector<string> fun(const vector<datos> &p,float pesomax,float pesomin) {
	vector<string> o;
	for(size_t i=0; i<p.size(); i++) {
		if(p[i].peso>pesomin and p[i].peso<pesomax) {
			o.push_back(p[i].nombre);
		}
	}
	return o;
}
int main() {
	int nperros;
	cin >> nperros;
	vector<datos> v(nperros);
	for (size_t i=0; i<v.size(); i++) {
		getline(cin,v[i].nombre);
		getline(cin,v[i].raza);
		cin.ignore();
		cin >> v[i].peso >> v[i].edad;
	}
	string raza;
	cin.ignore();
	getline(cin,raza);
	vector<string> g=funcion(v,raza);
	for(int i=0;i<g.size();i++) { 
		cout << g[i];
	}
	
	vector<datos> p(nperros);
	for (size_t p=0; i<p.size(); i++) {
		getline(cin,p[i].nombre);
		getline(cin,p[i].raza);
		cin.ignore();
		cin >> p[i].peso >> p[i].edad;
	}
	float pesomax;
	cin >> pesomax;
	
	float pesomin;
	cin >> pesomin;
	vector<string> h=fun(p,pesomax,pesomin);
	for(int i=0;i<h.size();i++) { 
		cout << h[i];
	}
	
	return 0;
}

