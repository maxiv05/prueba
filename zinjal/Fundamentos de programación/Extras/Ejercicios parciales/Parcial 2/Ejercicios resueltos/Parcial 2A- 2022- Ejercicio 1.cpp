#include <iostream>
#include <vector>
using namespace std;

struct alumno {
	int DNI; 
	vector<int> notas;
};

pair<int, int> dos_max(vector<alumno> a){
	int mayor1= -1, alumno1= -1, mayor2= -1, alumno2=-1;
	for(size_t i = 0; i < a.size(); i++){
		int contador= 0;
		for(size_t j = 0; j < a[i].notas.size(); j++){
			if(a[i].notas[j] >= 6){
				contador++;
			}
		}
		if(contador> mayor1){
			mayor2 = mayor1;
			alumno2 = alumno1;
			mayor1 = contador;
			alumno1 = i;
		} else if(contador> mayor2 and contador< mayor1){
			mayor2 = contador;
			alumno2 = i;
		};
	}
	return {alumno1, alumno2};
}
	
pair<int,int> desempenio_materia(vector<alumno> a, vector<alumno> cant, int DNI, int codigo){
	int veces_rendida, ultima_nota;
	for(size_t i = 0; i < a.size(); i++){
		if(a[i].DNI == DNI){
			veces_rendida = cant[i].notas[codigo];
			ultima_nota = a[i].notas[codigo];
		}
	}return {veces_rendida, ultima_nota};
	}


int main() {
	int n;
	cin >> n;
	vector<alumno> a(n);
	vector<alumno> cant_rendida(n);
	
	int cod_materia, nota;
	cin >> cod_materia;
	
	for(size_t i = 0; i < a.size(); i++){
		int DNI;
		cin >> DNI;
		a[i].DNI = DNI;
		cant_rendida[i].DNI = DNI;
		a[i].notas.resize(37,0);
		cant_rendida[i].notas.resize(37,0);
		while(cod_materia != -1){
			cin >> nota;
			a[i].notas[cod_materia] = nota;
			cant_rendida[i].notas[cod_materia] += 1;
			cin >> cod_materia;
		}
	}
	
	pair<int, int> mayores = dos_max(a);
	cout << mayores.first << endl;
	cout << mayores.second << endl;
	
	int DNI;
	int cod;
	cin >> DNI;
	cin >> cod;
	pair<int, int> desempenio = desempenio_materia(a, cant_rendida, DNI, cod);
	
	cout << desempenio.first << endl;
	cout << desempenio.second << endl;
	
	return 0;
}



	

