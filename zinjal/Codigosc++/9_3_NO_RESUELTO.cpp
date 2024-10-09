#include <iostream>
#include <vector>
using namespace std;
int determinar_pos(const vector<string> &v, string nueva){
	for (size_t i=0; i<v.size();i++) {
		if (v[i]>nueva) {
			return i;
		}
	}
	return v.size();
}
void insertar(vector<string> &v,string nueva, int pos) {
	v.resize(v.size()+1);
	for(size_t i=v.size()-1; i>pos; --i) {
		v[i] = v[i-1];
	}
	v[pos]=nueva;
}
int main() {
	vector<string> v{"bbb","ccc","ggg","kkk", "mmm", "qqq"};
	string nueva="ddd";
	int pos=determinar_pos(v,nueva);
	insertar(v,nueva,pos);
	for (string p : v) {
		cout << p << endl;
	}
	

	return 0;
}

