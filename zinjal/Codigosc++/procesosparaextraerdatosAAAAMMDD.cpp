#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int fecha;
	cin >> fecha;
	int x=(fecha/100)%100;
	cout << x << endl;
	int k=(fecha/10000);
	cout << k << endl;
	int dia=(fecha%100);
	cout << dia << endl;
	
	
	return 0;
}

