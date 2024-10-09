#include <iostream>
#include <vector>
#include <matrix>
using namespace std;

struct empleado{
	int numero;
	string apellido;
	string nombre;
	int cuil;
	int fechanac;
};

int mejor_pago(matrix<float>&m, int mes){
	int mayor=0;
	int num;
	for(int i=mes; i<mes+1; i++) {
		for(int j=0;j<50;j++) { 
			if(m[j][i]>mayor){
				mayor=m[j][i];
				num=j;
			}
		}
	} return num;
}
	
int edad (const vector<empleado>&v, int num){
	int anio;
	for(size_t i=0;i<v.size();i++) { 
		anio= (num-v[i].fechanac)/10000;
	} return anio;
}

int mayores50 (const vector<empleado>&v,int num){
	int contador;
	for(size_t i=0;i<v.size();i++) { 
		if(edad(v,num)>50){
			contador++;
		}
	} return contador;
}
	
int menores50 (const vector<empleado>&v, int num){
	int contador;
	for(size_t i=0;i<v.size();i++) { 
		if(edad(v,num)<50){
			contador++;
		}
	} return contador;
}
	
int menospago(const matrix<float>&m){
	int menor=9999;
	int me;
	for(int j=0;j<50;j++) { 
		for(int i=0;i<12;i++) { 
			if(m[j][i]<menor){
				menor=m[i][j];
				me=i;
			}
		}
	} return me;
}
	
int main() {
	
	vector<empleado>v(50);
	//La hago ordenada pq no se como se hace desordenada;
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].numero;
		cin>>v[i].apellido;
		cin>>v[i].nombre;
		cin>>v[i].cuil;
		cin>>v[i].fechanac;
	}
	
	matrix<float> m (50,12);
	int numero;
	cin>>numero;
	while (numero!=-1){
		int mes;
		cin>>mes;
		float salario;
		cin>>salario;
		m[numero][mes]=salario;
		cin>>numero;
	}
	
	int mes;
	cin>>mes;
	
	int pagadomej= mejor_pago(m, mes);
	cout<<pagadomej;
	
	int num=20240623;
	
	int mayor50= mayores50(v, num);
	cout<<mayor50;
	
	int menor50= menores50(v, num);
	cout<<menor50;
	
	int mesmenos= menospago(m);
	cout<<mesmenos;
	
	return 0;
}

