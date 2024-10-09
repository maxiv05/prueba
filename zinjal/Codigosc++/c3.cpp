#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	
	float raiz_1;
	float raiz_2;
		int a,b,c;
		cin >> a >> b >> c;
		 raiz_1 = (-b+sqrt(b*b-4*a*c))/(2*a);
		 raiz_2 = (-b-sqrt(b*b-4*a*c))/(2*a);

			cout << raiz_1 << "\n";
			cout << raiz_2;
	return 0;
	
}
