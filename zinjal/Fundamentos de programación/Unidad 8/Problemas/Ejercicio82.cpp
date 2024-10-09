#include <iostream>
using namespace std;

bool es_primo (int n){
	for(int i=2; i<n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(int argc, char *argv[]) {
	
	int num=2, primos=0;
	while (primos<1000){
		if (es_primo (num)){
			cout<<num<<endl;
			primos=primos+1;
		}
		num=num+1;
	}
	
	return 0;
}

