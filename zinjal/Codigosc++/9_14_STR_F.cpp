#include <iostream>
using namespace std;
struct complejo {
	int a;
	int b;
};
pair<int,int> suma(complejo x,complejo y){
	pair<int,int>res;
	res.first=x.a+y.a;
	res.second=x.b+y.b;
	return res; ///SUMA///
}	
pair<int,int> resta(complejo x,complejo y){
	pair<int,int>ans;
	ans.first=x.a-y.a;
	ans.second=x.b-y.b;
	return ans; ///RESTA//		
}
	
pair<int,int> producto(complejo x,complejo y){
	pair<int,int>p;
	p.first=(x.a*y.a)+(x.a*y.b);
	p.second=(x.b*y.a)+(x.b*y.b);
	return p; ///PRODUCTO//		
}
int main() {
	complejo num;
	complejo num2;
	cout << "Ingrese los 2 números complejos" << endl;
	cin >> num.a >> num.b >> num2.a >> num2.b;
	cout << "Ingrese 1 para sumar, 2 para restar o 3 para multipplicar los 2 números complejos" << endl;
	int condicion;
	cin >> condicion;
	char signo;
	switch (condicion) {
	case '1':
		pair<int,int>res = suma(num,num2);
		if (res.second>0){
			signo='+';
		} else{
			res.second=-res.second;
			signo='-';
		}
	
		cout << "El resultado de la suma es: " << res.first << " " << signo << " " << res.second << "i" << endl;
		break;
	case '2': 
		pair<int,int>ans = resta(num,num2);
		if (ans.second>0){
			signo='+';
		} else{
			ans.second=-ans.second;
			signo='-';
		}
		cout << "El resultado de la resta es: " << ans.first << " " << signo << " " << ans.second << "i" << endl;
		break;
	case 3:
		pair<int,int>p = producto(num,num2);
		if (p.second>0) {
			signo='+';
		} else{
			p.second=-p.second;
			signo='-';
		}
		cout << "El resultado del producto es: " << p.first << " " << signo << " " << p.second << "i" << endl;
	default:
		cout << "Opción inválida. " << endl;
	};
	return 0;
}

