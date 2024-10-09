#include <iostream>
#include <vector>
using namespace std;

struct alumno{
	string apellido;
	string nombre;
	float nota1;
	float nota2;
	float recu1;
	float recu2;
};

struct condicion{
	string nombre;
	string apellido;
	string condicion;
	float nota;
};

vector<condicion> condfinal (const vector<alumno>&a, int n){
	vector<condicion>condialumno(n);
	for(size_t i=0;i<a.size();i++) { 
		condialumno[i].nombre=a[i].nombre;
		condialumno[i].apellido=a[i].apellido;
		int parc1=0;
		int parc2=0;
		if(a[i].nota1>a[i].recu1){
			parc1=a[i].nota1;
		}else {
			parc1=a[i].recu1;
		}
		
		if(a[i].nota2>a[i].recu2){
			parc2=a[i].nota2;
		}else{
			parc2=a[i].recu2;
		}
		
		if(parc1>=6 and parc2>=6){
			condialumno[i].condicion="Promociona";
			condialumno[i].nota=(parc1+parc2)/2;
		}else if (parc1>=4 and parc2>=4){
			condialumno[i].condicion="Regular";
			condialumno[i].nota=-1;
		} else{
			condialumno[i].condicion="Libre";
			condialumno[i].nota=-1;
		}
	} return condialumno;
}

int main() {
	
	int n;
	cin>>n;
	vector<alumno>a(n);
	for(size_t i=0;i<a.size();i++) {  
		cin>>a[i].nombre;
		cin>>a[i].apellido;
		cin>>a[i].nota1;
		cin>>a[i].recu1;
		cin>>a[i].nota2;
		cin>>a[i].recu2;
	}
	
	vector<condicion> condicionalu= condfinal(a, n);
	for(size_t i=0;i<a.size();i++) {  
		cout<<condicionalu[i].nombre;
		cout<<condicionalu[i].apellido;
		cout<<condicionalu[i].condicion;
		cout<<condicionalu[i].nota;
	}
	
	return 0;
}

