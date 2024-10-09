#include <iostream>
#include <cmath>
using namespace std;

struct datatime{
	int hh;
	int mm;
	int ss;
};
datatime dif_time(datatime num1, datatime num2){
	int primero=num1.hh*3600+ num1.mm*60+ num1.ss; 
	int segundo=num2.hh*3600+ num2.mm*60+ num2.ss; 
	int resta=abs(primero-segundo);
	
	datatime convertidos;
	convertidos.hh= resta/3600;
	int aux= resta%3600;
	convertidos.mm=floor(aux/60);
	convertidos.ss=(aux%60);
	
	return convertidos;
}

int main() {
	
	datatime num1;
	cin>>num1.hh;
	cin>>num1.mm;
	cin>>num1.ss;
	
	datatime num2;
	cin>>num2.hh;
	cin>>num2.mm;
	cin>>num2.ss;
	
	datatime totales= dif_time (num1, num2);
	cout<<totales.hh;
	cout<<totales.mm;
	cout<<totales.ss;
	
	
	return 0;
}

