#include <iostream>
using namespace std;
bool esprimo( int num_a_probar){
	for (int i=2; i<num_a_probar; i++){
		if (num_a_probar%i==0)return false;
	}
	return true;
}
	int main(int argc, char *argv[]) {
		int contprimos=0;
		int num_a_probar=2;
		do {
			num_a_probar++;
		if (esprimo(num_a_probar)) {
			cout << num_a_probar << endl;
			contprimos=contprimos+1;
		}
		}while (contprimos<1000);
			return 0;
	}
	
