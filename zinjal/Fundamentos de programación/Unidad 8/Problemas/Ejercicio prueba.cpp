#include <iostream>
using namespace std;

int suma(int a, int b){
	return a+b;
}
	
int main(int argc, char *argv[]) {
	
	int resultado, a, b;
	cin>>a>>b;
	
	resultado= suma(a,b);
	cout<<"El resultado es "<<resultado;
	
	return 0;
}
