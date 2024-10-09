#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x;
	int y;
	int z;
	cin >> x;
	cin >> y;
	cin >> z;
	int mayor;
	mayor=0;
	if (x > y and x > z) {
		mayor=x;
	} else {
		if (y > z) {
			mayor=y;
		}else {
				mayor=z;
			}
		}
			
	
	cout << mayor;
	
	
	
	return 0;
}

