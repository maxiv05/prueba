#include <iostream>
#include <vector>
using namespace std;

struct tiempo{
	int min;
	int seg;
};

struct ciclismo{
	string nombre;
	tiempo t1;
	tiempo t2;
	tiempo t3;
	int mintot;
	int segtot;
};

int convertir_segundos(tiempo t1, tiempo t2, tiempo t3){
	int tt1=t1.min*60+t1.seg;
	int tt2=t2.min*60+t2.seg;
	int tt3=t2.min*60+t2.seg;
	
	int total= tt1+tt2+tt3;
	return total;
}
	
pair<int,int> cantidad (int total){
	int minutos= total/60;
	int segundos= total%60;
	return {minutos, segundos};
}

ciclismo ganador (const vector<ciclismo>&v){
	ciclismo mayor={"",0,0,0,0,0,0,0,0};
	for(size_t i=0;i<v.size();i++) { 
		if(v[i].mintot>mayor.mintot or (v[i].mintot==mayor.mintot and v[i].segtot>mayor.segtot)){
			mayor=v[i];
		}
	} return mayor;
}

int main() {
	
	int n;
	cin>>n;
	vector<ciclismo>v(n);
	
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i].nombre;
		cin>>v[i].t1.min;
		cin>>v[i].t1.seg;
		cin>>v[i].t2.min;
		cin>>v[i].t2.seg;
		cin>>v[i].t3.min;
		cin>>v[i].t3.seg;
	}
	
	for(size_t i=0;i<v.size();i++) { 
		int total= convertir_segundos(v[i].t1, v[i].t2, v[i].t3);
		pair<int, int> finall= cantidad (total);
		v[i].mintot=finall.first;
		v[i].segtot=finall.second;
	}
	
	ciclismo winner= ganador(v);
	cout<<winner.nombre;
	cout<<winner.mintot;
	cout<<winner.segtot;
	
	
	
	return 0;
}

