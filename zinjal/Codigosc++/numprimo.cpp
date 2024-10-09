#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout << "Escriba el valor:" << endl;
	cin >> num;
	int divisores=0;
	for (int i=num ; i!=1; i--) {
		if (num%i==0) {
			divisores=divisores+1;
		}
	}
	if (divisores>2) {
		cout << num << " " << "no es primo.";
	}	else{
		cout << num << " " << "es primo.";
	} ///aca termina la a. 
	///////////////////////////////////////////////////////////////////
	
	
	
	return 0;
}

