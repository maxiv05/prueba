#include <iostream>
#include <vector>
#include <matrix>
using namespace std;

int main() {
	matrix<int> m(4,25,0);
	int numsuc=0;
	int numart=0;
	int ventas=0;
	int i=0;
	while (i<4*25) {
		cout << "Ingrese el número de sucursal" << endl;
		cin >> numsuc;
		cout << "Ingrese el número de artículo" << endl;
		cin >> numart;
		cout << "Ingrese el número de ventas del artículo" << endl;
		cin >> ventas;
		m[numsuc][numart]=ventas;
		i++;
	}
	vector<int> v(25,0);
	for (int i=0; i<4 ;i++) {
		for (int n=0; i<25; n++) {
			v[n]=m[i][n]+v[n];
		}
	}
	for (size_t i=0; i<v.size(); i++) {
		cout << "La cantidad de total de ventas del artículo " << i << " es: " << v[i] << endl;
	}
	///ACTIVIDAD///A///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	int suc_3_=0;
	for (int i=0; i<25; i++) {
		suc_3_=m[2][i]+suc_3_; ///ACA HAGO M[2] PARA HACER REFERENCIA A LA SUCURSAL 3,¿HAY OTRA FORMA, SE PUEDE MEJORAR?******************************
	}
	cout << "El total de ventas de la sucursal 3 es: " << suc_3_ << endl;///ACTIVIDAD///B/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	cout << m[0][5] << endl;///ACTIVIDAD///C////////////////////////////////////////////////////////////////////////////////////////////////////
	int mayorsuc_8=0;
	for (int i=0; i<4; i++) {
		if (m[i][8]>mayorsuc_8){ 
			mayorsuc_8=i;
		}
	}
	mayorsuc_8=mayorsuc_8-1; ////FIJATE ACÁ, LO MISMO QUE ANTES///
	cout << "La sucursal que mas vendió el artículo 8 fue la número: " << mayorsuc_8 << endl; ///ACTIVIDAD//////////////D///////////
	///EJERCICIO                 9                ///////////////////////
	vector<int> vec(25);
	cout << "Ingrese el precio del artículo " << endl;
	for (size_t i=0; i<vec.size(); i++) {
		cout << i << ": " << endl;
		cin >> vec[i];
	}
	vector<int> recaudacion(4);
	for (int i=0; i<4; i++) {
		for (int k=0; k<25; k++) {
			recaudacion[i]=vec[i]*m[i][k];
		}
	}
	cout << "El total de recaudacion de la sucursal: " << endl; /////ACTIVIDAD A /////////////////////////
	for (size_t i=0; i<4; i++) {
		cout << i << "es de: " << recaudacion[i];
	}
	int recaudaciontotal=0;
	for (size_t i=0; i<4; i++) {
		recaudaciontotal=recaudacion[i]+recaudaciontotal;
	}
	cout << "La recaudación total de la empresa es de: " << recaudaciontotal << endl; /////////////////////////ACTIVIDAD B*////////
	int sucmayor=0;
	for (size_t i=0; i<4; i++) {
		if (recaudacion[i]>sucmayor){
			sucmayor=i;
		}
	}
	cout << "La sucursal con la mayor recaudación es la: " << sucmayor << endl; /////////////////ACTIVIDAD C***********************
	return 0;
}

