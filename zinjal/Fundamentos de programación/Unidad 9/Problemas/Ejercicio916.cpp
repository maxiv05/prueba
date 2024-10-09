#include <iostream>
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

condicion condfinal(const alumno &a){
	condicion condialumno;
	condialumno.nombre= a.nombre;
	condialumno.apellido= a.apellido;
	int parc1;
	int parc2;
	if(a.nota1>a.recu1){
		parc1=a.nota1;
	}else {
	   parc1=a.recu1;
	}
	
	if(a.nota2>a.recu2){
		parc2=a.nota2;
	}else{
		parc2=a.recu2;
	}
	
	if(parc1>=6 and parc2>=6){
		condialumno.condicion="Promociona";
		condialumno.nota=(parc1+parc2)/2;
	}else if (parc1>=4 and parc2>=4){
		condialumno.condicion="Regular";
		condialumno.nota=-1;
	} else{
		condialumno.condicion="Libre";
		condialumno.nota=-1;
	}
	return condialumno;
}

int main() {
	
	alumno alu;
	cin>>alu.nombre;
	cin>>alu.apellido;
	cin>>alu.nota1;
	cin>>alu.recu1;
	cin>>alu.nota2;
	cin>>alu.recu2;
	
	condicion condicionAlumno=condfinal(alu);
	cout<<condicionAlumno.nombre<<endl;	
	cout<<condicionAlumno.apellido<<endl;	
	cout<<condicionAlumno.condicion<<endl;	
	cout<<condicionAlumno.nota<<endl;
	return 0;
}

