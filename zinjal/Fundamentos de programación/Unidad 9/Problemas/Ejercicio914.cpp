#include <iostream>
using namespace std;

struct complejo{
	float preal;
	float pimag;
};

complejo suma(complejo a, complejo b){
	complejo m;
	m.preal=a.preal + b.preal;
	m.pimag=a.pimag + b.pimag;
	return m;
} 

complejo resta(complejo a, complejo b){
	complejo m;
	m.preal=a.preal - b.preal;
	m.pimag=a.pimag - b.pimag;
	return m;
} 

complejo multiplicacion(complejo a, complejo b){
	complejo m;
	m.preal= a.preal*b.preal - a.pimag*b.pimag;
	m.pimag= a.preal*b.pimag + a.pimag*b.preal;
	return m;
} 

int main() {
	
	complejo c1, c2;
	cin>>c1.preal>>c1.pimag>>endl;
	cin>>c2.preal>>c2.pimag>>endl;
	
	int opcion
	cin>>opcion;
	
	complejo m;
	switch (oper){
	case 1: m=suma(c1,c2); break;
	case 2: m=resta(c1,c2); break;
	case 3: m=multiplicacion(c1,c2); break;
	}
	
	cout<<m.preal<<"+"<<m.pimg<<"i"<<endl;
	
	return 0;
}

