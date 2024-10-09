#include <iostream>
#include <cmath>
using namespace std;

struct datatime{
	int hh;
	int mm;
	int ss;
};

datatime dif_time(datatime num1, datatime num2){
	
	int primero=num1.hh*3600+num1.mm*60+num1.ss;
	int segundo=num2.hh*3600+num2.mm*60+num2.ss;
	int resta=abs(primero-segundo);
	
	datatime convertir;
	convertir.hh= resta/3600;
	int pri= resta%3600;
	convertir.mm= floor (pri/60);
	convertir.ss= floor(resta%60);
	
	return convertir;
}

int main() {
	
	datatime t1;
	cin>>t1.hh;
	cin>>t1.mm;
	cin>>t1.ss;
	
	datatime t2;
	cin>>t2.hh;
	cin>>t2.mm;
	cin>>t2.ss;
	
	datatime resultado= dif_time(t1,t2);
	cout<<resultado.hh<<endl;
	cout<<resultado.mm<<endl;
	cout<<resultado.ss<<endl;
	
	
	
	return 0;
}

