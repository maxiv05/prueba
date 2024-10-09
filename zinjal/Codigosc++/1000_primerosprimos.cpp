#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int contprimos=0,contvalidacion=0,num=1;
	cout << 1 << " ";
	do { 
		num=num+1;
		for (int i=num; i!=1 ;i--) {
			if (num%i==0) {
				contvalidacion=contvalidacion+1;
			}
		}
		if (contvalidacion<2) {
			cout << num << " ";
			contprimos=contprimos+1;
		}
		contvalidacion=0;
		
	} while (contprimos!=1000);
		return 0;
}

