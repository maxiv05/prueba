#include <iostream>
using namespace std;

bool es_primo(int n) {
	for (int d = 2; d<n; ++d) {
		if (n%d==0) {
			return false;
		}
	}
	return true;
	
}
int main(int argc, char *argv[]) {
	int n=2, cant_primos=0;
	do {
		if (es_primo(n)) {
			cout << n << endl;
			++cant_primos;
		}
		++n;
	} while(cant_primos<10);
	return 0;
}

