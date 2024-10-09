#include <iostream>
#include <matrix>
using namespace std;

int main() {
	
	matrix<int>m(4,5);
	for(size_t i=0; i<m.size(0); i++) { 
		for(size_t j=0; j<m.size(1); j++) {  
			m[i][j]=10+rand()%91;
		}
	}
	
	for(size_t i=0;i<m.size(0);i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			cout << m[i][j] << "  ";
		}
		cout << endl;
	}
	int fila_may = 0;
	int fila_seg;
	int mayor = 0;
	int segundo;
	m.resize(m.size(0) + 1, m.size(1));
	for(size_t i=0;i<m.size(0) - 1;i++) { 
		int suma = 0;
		for(size_t j=0;j<m.size(1);j++) { 
			suma+= m[i][j];
		}
		if(suma > mayor){
			fila_seg = fila_may;
			segundo = mayor;
			mayor = suma;
			fila_may = i;
		} else if(suma > segundo && suma < mayor){
			segundo = suma;
			fila_seg = i;
		}
	}
	for(size_t j=0;j<m.size(1);j++) { 
		m[m.size(0)-1][j] = m[fila_may][j];
		m[fila_may][j] = m[1][j];
		m[1][j] = m[m.size(0)-1][j];
	}
	
	for(size_t j=0;j<m.size(1);j++) { 
		m[m.size(0)-1][j] = m[fila_seg][j];
		m[fila_seg][j] = m[1][j];
		m[1][j] = m[m.size(0)-1][j];
	}
	
	/// Matriz intercambiada
	for(size_t i=0;i<m.size(0) - 1;i++) { 
		for(size_t j=0;j<m.size(1);j++) { 
			cout << m[i][j] << "   ";
		}
		cout << endl;
	}
	
	return 0;
}

