#include<iostream>

using namespace std;

int main(){
	
			int n1,n2,n3;
			
		cout<<"digite tres numeros: ";cin>>n1>>n2>>n3;
		
	if (n1 >n2 && n1>n3){
		
		cout<<"El " <<n1<< " es el mayor \n";
	}
	else if  (n2 >n1 && n2>n3){
		cout<<"El " <<n2<< " es el mayor \n";
	}
	else {
		
		cout<<"El " <<n3<< " es el mayor \n";
	}

		return 0;
	
}
