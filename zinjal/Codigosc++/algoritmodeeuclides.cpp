#include <iostream>
using namespace std;
int mcd(int a, int b) {
	if (a==b) {
		return a;
	} else{
		if (a<b) {
			return mcd(a,b-a);
		} else{
			return mcd(a-b,b);
		}
	}
}

int main() {
	int a,b;
	cout << "Asigne el valor para a y otro para b." << endl;
	cin >> a >> b;
	int resultado=mcd(a,b);
	cout << "El MCD es:" << resultado << endl;
	return 0;
}

