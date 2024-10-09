#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Elige un numero:" << endl;
	int num;
	cin >> num;
	for (int i=1; i!=num; i++) {
		cout << num-i << endl;
		if (i==num-1) {
			cout << "¡KBOOM!" << endl;
		}
	}
	return 0;
}

