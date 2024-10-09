#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c, discriminante;
	float x1, x2, disc1, disc2;
	
	cin>>a>>b>>c;
	
	discriminante= b*b-4*a*c;
	if (discriminante>0) {
		disc1=-b+sqrt(b*b+4*a*c);
		disc2=-b-sqrt(b*b+4*a*c);
		x1=disc1/(2*a);
		x2=disc2/(2*a);
		cout<<"Las soluciones son reales"<<endl;
		cout<<"Las raices son: "<<x1<< ", " << x2; 
	}
	if (discriminante<0){
		float pr=-b/(2*a);
		float pi= sqrt(-discriminante)/(2*a);
		cout<< pr<<"+"<<pi<<"i"<<endl;
		cout<< pr<<"-"<<pi<<"i"<<endl;
	}
	return 0;
}

