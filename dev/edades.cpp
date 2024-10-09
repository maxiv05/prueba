/*numeros romanos 

m 1000
d 500
c 1000
l 50
x 10
v 5
I 1




*/

#include<iostream>

using namespace std;

int main(){
			 int numero,unidades,decenas,centenas,millar;
 
		 cout<<"digame el numero que quiere saber en numero romanos: ";cin>>numero;
 			//ejemplo 2152 -> 2000 +100 + 50 +2

			unidades= numero%10;numero /=10;//unidades es igual 2
			decenas = numero%10;numero /=10;//decenas = 5
			centenas= numero%10;numero /=10;//decenas = 1
			millar= numero%10;numero /=10;//2

			switch(millar){
				case 1: cout<<"M";break;
				case 2: cout<<"MM";break;
				case 3: cout<<"MMM";break;
			}
			switch(centenas){
				case 1: cout<<"C";break;
				case 2: cout<<"CC";break;
				case 3: cout<<"CCC";break;
				case 4: cout<<"CD";break;
				case 5: cout<<"D";break;
				case 6: cout<<"DC";break;
				case 7: cout<<"DCC";break;
				case 8: cout<<"DCCC";break;
				case 9: cout<<"CM";break;
			}

			switch(decenas){
				case 1: cout<<"X";break;
				case 2: cout<<"XX";break;
				case 3: cout<<"XXX";break;
				case 4: cout<<"XL";break;
				case 5: cout<<"L";break;
				case 6: cout<<"LX";break;
				case 7: cout<<"LXX";break;
				case 8: cout<<"LXXX";break;
				case 9: cout<<"XC";break;
}
				switch(unidades){
				case 1: cout<<"I";break;
				case 2: cout<<"II";break;
				case 3: cout<<"III";break;
				case 4: cout<<"IV";break;
				case 5: cout<<"V";break;
				case 6: cout<<"VI";break;
				case 7: cout<<"VII";break;
				case 8: cout<<"VIII";break;
				case 9: cout<<"IX";break;
				

				
			}




	return 0;
}
