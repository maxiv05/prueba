#include <iostream>
#include <vector>
#include <matrix>
using namespace std;
int mashrojo(const matrix<int> &m,const int nesquinas) {
	// la matriz m es de Nx24
	// m.size(0) da N
	// m.size(1) da 24
	int mayor=0;
	int contador=0;
	vector<int> v(24,0);
	for(int k=0; k<m.size(1); k++) { ///IGUAL QUE ANTES, ¿CÓMO SE USA EL SIZE_T PARA MATRICES? **************  *****************************************
		for(int i=0; i<m.size(0); i++) {
			contador+=m[i][k];
		}
		v[k]=contador;
		contador=0;
	}
	int hora;
	for(size_t i=0; i<v.size(); i++) {
		if(v[i]>mayor) {
			mayor=v[i];
			hora=i;
		}
	}
	return hora;
}
int esquina(const matrix<int> &m,int nesquinas) {
	int mayor=0;
	int contador=0;
	int esq=0;
	vector<int> v(nesquinas);
	for(int i=0; i<nesquinas; i++) { ///IGUAL QUE ANTES, ¿CÓMO SE USA EL SIZE_T PARA MATRICES? **************  *****************************************
		for(int k=0; k<24; k++) { 
			contador+=m[i][k];
		}
		v[i]=contador;
		contador=0;
	}
	for(size_t i=0; i<v.size();i++) {
		if (v[i]>mayor) {
			esq=i;
			mayor=v[i];
		}
	}
	return esq;
}
pair<vector<int>, vector<int>> maspasos(const matrix<int> &m,int nesquinas,int cantpasos) {
	vector<int> hora;
	vector<int> esquina;
	for(int i=0; i<nesquinas; i++) {
		for(int k=0; i<24; k++) {
			if(m[i][k]>cantpasos) {
				hora.push_back(k);
				esquina.push_back(i);
			}
		}
	}
	return make_pair(hora,esquina);
}
int main() {
	int nesquinas;
	cin >> nesquinas;
	matrix<int> m(nesquinas,24,0);
	for(size_t k=0; k<24; k++) {
		for(size_t i=0; i<nesquinas; i++) {
			cin >> m[i][k];
		}
	}
	int hora=mashrojo(m,nesquinas);
	cout << "La hora cuando se registran más pasos en rojos es a las " << hora << "." << endl;
	int esq=esquina(m,nesquinas);
	cout << "La esquina donde más pasos en rojos hay es la " << esq << "." << endl;
	int cantpasos;
	cin >> cantpasos;
	pair<vector<int>,vector<int>> p=maspasos(m,nesquinas,cantpasos);
	vector<int> hor=p.first; ///Al correr el programa no termina en codigo de salida 0, hay un error. * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	vector<int> esquina=p.second;
	cout << "Las siguientes esquinas superan el número de pasos de: " << cantpasos << ":" << endl;
	for(size_t i=0; i<hor.size(); i++) {
		cout << "Esquina: " << esquina[i] << " a las " << hor[i] << " horas." << endl;
	}
	
	return 0;
}

