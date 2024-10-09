#include <iostream>
#include <vector>
using namespace std;
int buscar(string s,int posicion,vector<string> v) {
	for(int i=posicion; i<v.size();i++) {
		if(v[i]==s) {
			return i;
		}
	}
	return -1;
}
int reemplazar(vector<string> &v,string s1,string s2) {
	int contador=0;
	for(size_t i=0; i<v.size();i++) {
		if(v[i]==s1) {
			v[i]=s2;
			contador=contador+1;
		}
	}
	return contador;
}
int main() {
	vector<string> v;
	string s;
	cout << "Ingrese s" << endl;
	cin >> s;
	int p;
	cout << "Ingrese p" << endl;
	cin >> p;
	buscar(s,p,v);
	string s1,s2;
	cout << "Ingrese s1 y s2" << endl;
 	cin >> s1 >> s2;
	int x=reemplazar(v,s1,s2);
	cout << x << endl;
	return 0;
}

