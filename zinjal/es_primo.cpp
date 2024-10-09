#include <iostream>
using namespace std;

bool es_primo(int num){
	bool es= true;
	int cant=0;
	for(int i=2;i<num;i++) {  
		if (num%i==0){
			++cant;
			break;
		}
		
	}
	if (es) return true;
	else return false;
}
	int main() {
	
	int num=2,mostrado=0	;
	while(mostrado<1000){	
		if (es_primo(num)){
			cout<<num<<"  ";
			++mostrado;
		}
		++num;
	}
		
		
		
	return 0;
}

