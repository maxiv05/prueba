#include <iostream>
#include <vector>
using namespace std;

int buscar (const vector<string>&v, string s, int p){
	for(size_t i=p;i<v.size();i++) { 
		if(v[i]==s){
			return i;
			break;
		}
	} return -1;
}
	
int reemplazar(vector<string>v, string s1, string s2){
	int p=buscar(v,s1,0);
	int contador;
	while(p!=-1){
		v[p]=s2;
		contador++;
		p=buscar(v,s1,p+1);
	} return contador;
}

int main() {
	
	return 0;
}

