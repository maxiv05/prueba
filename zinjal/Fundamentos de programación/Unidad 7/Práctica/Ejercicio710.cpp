#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	
	cout<<"ingrese un número"<<endl;
	cin>>n;
	
	cout<<"Elija la opción A para ver la lista creciente, de lo contrario, ponga B"<<endl;
	string letra;
	cin>>letra;
	
	
	if (letra=="a"){
		if (n%2==0){
			for(int i=0;i<n;i=i+2) { 
				cout<<i	<<endl;
			}
		}
		if (n%2!=0){
			n=n-1;
			for(int i=0;i<=n;i=i+2) { 
				cout<<i<<endl;
			}
		}
	}
	
	if (letra=="b"){
		if (n%2==0){
			for(int i=n;i>0;i=i-2) { 
				cout<<i	<<endl;
			}
		}
		if (n%2!=0){
			n=n-1;
			for(int i=n;i>0;i=i-2) { 
				cout<<i<<endl;
			}
		}
	}
	
	return 0;
}

