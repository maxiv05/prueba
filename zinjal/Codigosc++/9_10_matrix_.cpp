#include <iostream>
#include <vector>
#include <matrix>
using namespace std;

int main() {
	matrix<int> m(5,12);
	for (int i=0; i<5; i++) {
		for (int k=0; i<12; i++) {
			cin >> m[i][k];
		}
	}
	vector<int> sum(5,0);
	for (unsigned i=0; i<sum.size(); i++) {
		for (int k=0; i<12; i++) {
			if (m[i][k]!=-1){
				sum[i]=m[i][k]+sum[i];
			}
		}
	}
	for (size_t i=0; i<sum.size(); i++) {
		sum[i]=sum[i]/12;
	}
	for (unsigned i=0; i<sum.size();i++) {
		for (unsigned k=0; i<12; k++) {
			if (m[i][k]==-1){
				m[i][k]=sum[i];
			}
		}
	}
	vector<int> totalmm(5,0); 
	for (int i=0; i<5; i++) {
		for (int k=0; i<12; i++) {
			totalmm[i]=m[i][k]+totalmm[i];
		}
	}
	m.resize(5,13);
	for (int i=0; i<5; i++) {
		m[i][13]=totalmm[i];
	}
	
	
	return 0;
}

