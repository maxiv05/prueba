#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<2<<endl;
	
	int n=3;
	do{
		bool es_primo = true;
		for (int d=2; d<=sqrt(n);++d){
			if(n%d==0){
				es_primo=false;
				break;
			}
		}
		if (es_primo) cout<<n<<endl;
		
		n+=2;
	} while(n<100);
	
	return 0;
}

