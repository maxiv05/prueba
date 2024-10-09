#include <iostream>
#include <vector>
using namespace std;

pair<int,int> dosmay(const vector<int>&v){
	int may1=0;
	int may2=0;
	for(size_t i=0;i<v.size();i++) { 
		if(v[i]>may1){
			may2=may1;
			may1=v[i];
		} else if (v[i]>may2){
			may2=v[i];
		}
	} return {may1, may2};
}

int main() {
	
	vector<int>v(5);
	for(size_t i=0;i<v.size();i++) { 
		cin>>v[i];
	}
	
	pair<int, int> mayores= dosmay(v);
	cout<<mayores.first<<endl;
	cout<<mayores.second;
	
	return 0;
}

