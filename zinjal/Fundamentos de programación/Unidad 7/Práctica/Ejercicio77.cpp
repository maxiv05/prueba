#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a, b, c;
	
	cout<<"Ingrese 3 números"<<endl;
	cin>>a>>b>>c;
	
	if (a>b and a>c){
		cout<<"El mayor es "<< a <<endl;
	}else if (b>a and b>c){
		cout<<"El mayor es "<< b << endl; 
	}else {
		cout<<"El mayor es "<< c <<endl;
	}
	return 0;
}

