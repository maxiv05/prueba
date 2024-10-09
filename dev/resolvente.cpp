
#include<iostream>
#include<math.h>
using namespace std;

int main(){

	float a,b,c,x_1=0,x_2=0;
	
	cout<<"digite el valor del coecifiente principal(a):";cin>>a;
	cout<<"digite el valor del coecifiente linel(b)";cin>>b;
	cout<<"digite el valor del coecifiente independicnete(c):";cin>>c;
	
	x_1= (-b+sqrt((pow (b,2))-(4*a*c)))/(2*a);
	x_2= (-b-sqrt((pow (b,2))-(4*a*c)))/(2*a);
	cout<<"las raices son:"<<endl<<x_1<<endl<<x_2;
	
	return 0;
}
