#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, contador, i;
	
	cout<<"Ingrese un n�mero"<<endl;
	cin>>n;
	
	contador=0;
	
	for (i=2; i<n; i++){
		if (n%i==0){
			cout<<"Su divisor es "<<endl;s
			cout<<i<<endl;
			contador=contador+1;
		}
	}
	
	if (contador==0) {
		cout<<"Es n�mero primo"<<endl;
	}else 
		cout<<"No es n�mero primo"<<endl;
	return 0;
}

