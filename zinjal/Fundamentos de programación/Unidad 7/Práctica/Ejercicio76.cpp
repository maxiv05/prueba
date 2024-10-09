#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	int a, c;
	cout<<"Ingrese un número"<<endl;
	cin>>c;
	if (c%2==0){
		cout<<"Es un número par"<<endl;
	} else {
		cout<<"No es par"<<endl;
	}
	cout<<"Ingrese otro número"<<endl;
	cin>> a;
	if (a%5==0 and a%3==0){
		cout<<"Es múltiplo de 3 y 5"<<endl;
	}else{
		cout<<"No es multiplo de 3 y 5"<<endl;
	}

	return 0;
}

