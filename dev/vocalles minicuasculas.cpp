#include<iostream>

using namespace std;

int main(){
	
	char letra;
	
	cout<<"digite un caracter: ";cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"es una vocal minuscula ";break;
		default : cout<<"NO una vocal minuscula ";break;
		
		
		
		
	}
	
	
	return 0;
}
