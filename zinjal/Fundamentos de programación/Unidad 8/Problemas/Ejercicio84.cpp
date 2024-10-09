#include <iostream>
using namespace std;

int num_mayor(int a,int b,int c = 0){
	int mayor;
	if (a > b && a > c)mayor=a;
	if (b > a && b > c)mayor=b;
	if (c > a && c > b)mayor=c;
	return mayor;
}

int main(int argc, char *argv[]) {
	
	int num1, num2, num3;
	cin>>num1>> num2>> num3;
	
	int valor = num_mayor(num1,num2);
	cout<<"El mayor es "<<valor<<endl;
	return 0;
	
}

