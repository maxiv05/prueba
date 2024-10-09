#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	for(int i=32;i<128;++i) { 
		char a=i;
		cout<<a<<" ";
	}
	
//	PARA LAS MAYUSCULAS: 
//	for(int i="A"; i="Z"; ++i){
//		char a=i;
//		cout<< i<< " = "<<a<<endl;
//	}
//	PARA LAS MINUSCULAS:
//	for(int i="a"; i="z"; ++i){
//		char a=i;
//		cout<< i<< " = "<<a<<endl;
//	}
	
	return 0;
}

