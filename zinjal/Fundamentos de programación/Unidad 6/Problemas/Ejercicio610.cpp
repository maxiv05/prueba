#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float dni, sueldoB, antiguedad, presentismo, montoF, estadoC, hijos;
	string nombre;
	
	montoF=1000;
	
	cout<<"	Ingresar nombre, DNI y su sueldo basico: "<<endl;
	cin>>nombre>>dni>>sueldoB;
	cout<<"Ingresar años de antiguedad y presentismo (si=1, no=0):"<<endl;
	cin>>antiguedad>>presentismo;
	cout<<"Ingresar estado civil (casado=1, no casado=0) y cantidad de hijos: "<<endl;
	cin>>estadoC>>hijos;
	
	
	int bonificacion, jubilacion, obraS, gremio, sueldoF;
	
	bonificacion=sueldoB*1.2/100*antiguedad;
	
	jubilacion=sueldoB*11/100;
	
	obraS=sueldoB*3/100;
	
	gremio=sueldoB*1/100;
	
	presentismo=presentismo*montoF;
	
	estadoC=estadoC*30;
	
	hijos=hijos*40;
	
	sueldoF=sueldoB+bonificacion-jubilacion-obraS-gremio+presentismo+estadoC+hijos;

	cout<<nombre<<" "<<dni<<", "<<endl<<"Su sueldo base es de: "<<sueldoB<<endl;
	cout<<"descuentos:"<<endl<<"+"<<bonificacion<<endl<<"+"<<presentismo<<endl<<"-"<<jubilacion<<endl<<"-"<<obraS<<endl<<"-"<<gremio<<endl<<"+"<<estadoC<<endl<<"+"<<hijos<<endl;
	cout<<"su sueldo final es: "<<sueldoF;
	
	return 0;
}

