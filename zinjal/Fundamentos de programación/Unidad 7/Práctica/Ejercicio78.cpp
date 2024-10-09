#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dian, mesn, anon, diferencia;
	int diav, mesv, anov, meses, dias;
	
	cout<<"Ingrese la fecha de nacimiento"<< endl;
	cin>>dian>>mesn>>anon;
	cout<<"Ingrese la fecha de votación"<< endl;
	cin>>diav>>mesv>>anov;
	
	diferencia= anov-anon;
	meses=mesv-mesn;
	dias= diav-dian;
	
	if (diferencia> 18){
		cout<<"Puede votar"<<endl;
	}
	if (diferencia==18){
		if (meses>0) {
			cout<<"Puede votar"<<endl;
		}else{
			cout<<"No puede votar"<<endl;
		}
	}
	if (meses==0){
		if (dias>0){
			cout<<"Puede votar"<<endl;
		}else {
			cout<<"No puede votar"<< endl; 
		}
	}
	if (diferencia<18){
		cout<<"No puede votar"<<endl;
	}
	
	return 0;
}

