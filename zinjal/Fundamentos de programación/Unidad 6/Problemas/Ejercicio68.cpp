#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float a,b,c, dis1, dis2, x1, x2;
	
	cout<<"Ingrese los valores de la ecuación"<< endl;
	cin>>a>>b>>c;
	
	dis1=-b+sqrt(b*b+4*a*c);
	dis2=-b+sqrt(b*b-4*a*c);
	
	x1=dis1/(2*a);
	x2=dis2/(2*a);
	
	cout<<"Las raices son "<< x1<< " , "<< x2;
	
	
	return 0;
}

