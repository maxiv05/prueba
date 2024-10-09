#include <iostream>
using namespace std;

float discriminante(float a, float b, float c){
	return b*b-4*a*c;
}

bool raicesr (float a, float b, float c){
	if (disc>=0){
		return true; 
	}
}
pair<float,float> calcular_raicesr (float a, float b, float c){
	if (raicesr==true){
		float raiz1= -b + sqrt(disc)/(2*a);
		float raiz2= -b - srqt(disc)/(2*a);
	}
}
pair<string, string> calcular_raicesc (float a, float b, float c){
	
	if (raicesr==false){
		float pr= -b/2*a;
		float pi= sqrt(-disc)/(2*a);
	}
}

int main(int argc, char *argv[]) {
	float a, b, c;
	cout<<"Escriba los valores a, b y c "<<endl;
	cin>>a>>b>>c;
	
	
	if (raicesr(a,b,c){
		pair<float, float> x;
		x=calcular_raicesr (a,b,c);
		cout<<"Las raices reales son: x1= "<<x.first<<endl;
		cout<<"x2= "<<x.second<<endl;
		
	} 
	else {
		pair <float, float>x;
		x= calcular_raicesc(a,b,c);
		cout<<"Las raices complejas son: x1= "<<x.first<<"+"<<pi<<"i"<<endl;
		cout<<"x2= "<<x.first<<"-"<<pi<<"i"<<endl;
	}

	return 0;
}

