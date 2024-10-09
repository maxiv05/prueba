#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
	vector<int> v(3);
	for (size_t i=0; i<v.size(); i++) {
		cout << "Ingrese la nota" << endl;
		cin >> v[i];
	}
	for (size_t i=0; i<v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}


