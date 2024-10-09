#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<string> aprob;
	vector<string> noaprob;
	
	int nota;
	cin>>nota;
	
	while(nota!=0){
		string nombre;
		cin>>nombre;
		
		if(nota>=6){
			aprob.push_back(nombre);
		}else{
			noaprob.push_back(nombre);
		}
		cin>>nota;
	}
	
	for(size_t i=0;i<aprob.size();i++) { 
		cout<<aprob[i]<<endl;
	}
	
	for(size_t i=0;i<noaprob.size();i++) { 
		cout<<noaprob[i]<<endl;
	}
	
	return 0;
}

