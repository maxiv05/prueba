#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
	vector<int> v(5);
	for (size_t i=0; i<v.size(); i++) {
		v[i]= rand()%51+100;
	}
	for (size_t i=0; i<v.size(); i++) {
		cout << v[i] << endl;
	}
	int pos;
	cin >> pos;
	int valorm;
	cin >> valorm;
    v.resize(v.size()+1);
	for (int i=v.size()-1; i>pos; i--){
		v[i]=v[i-1];
	}
	v[pos]=valorm;
	for (size_t i=0; i<v.size(); i++) {
		cout << v[i] << endl;
	}
	
	
	return 0;
}

