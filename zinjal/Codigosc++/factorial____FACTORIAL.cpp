#include <iostream>
using namespace std;
int fact(int num){
	if (num==1) { 
		return 1;
	} else{
		return num*fact(num-1);
	}
	
}
int main() {
	int num;
	cout << "Escriba un número" << endl;
	cin >> num;
	int factorial=fact(num);
	cout << factorial << endl;
	
	return 0;
}

