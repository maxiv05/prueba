#include <iostream>
#include <vector>
#include <matrix>
using namespace std;

int main() {
	int nhabilitados;
	cin >> nhabilitados;
	vector<string> v(9);
	cin.ignore();
	for(size_t i=0;i<v.size(); i++) {
		getline(cin,v[i-1]);
	}
	matrix<int> m(15,9,0);
	int barrio;
	int votos;
	for(int i=0;i<232;i++) { 
		cin >> barrio;
		for(int j=0;j<9;j++) { 
			cin >> votos;
			m[barrio-1][j]=m[barrio-1][j]+votos;
		}
	}
	int s=0;
	for(size_t i=0; i<m.size(0); i++) {
		for(size_t k=0; k<m.size(1); i++) {
			s+=m[i][k];
		}
	}
	int porcentaje=(s*100)/(nhabilitados);
	cout << porcentaje << endl;
	int mayor=0;
	vector<int> l(9);
	for(size_t i=0; i<m.size(0); i++) {
		for(size_t k=0; k<m.size(1); i++) {
			l[i]+=m[i][k];
		}
	}
	string winner;
	for(int i=0;i<9;i++) { 
		if(l[i]>mayor) {
			mayor=l[i];
			winner=v[i];
		}
	}		
	int codigo;
	cin >> codigo;
	string u;
	for(int i=0;i<9;i++) {
		if(m[i][codigo]>mayor) {
			mayor=m[i][codigo];
			u=v[i];
		}
	}	
	if(u==winner) {
		cout << "Si fue el mas votado" << endl;
	} else {
		cout << "No fue el más votado." << endl;
	}
	
	return 0;
}

	
