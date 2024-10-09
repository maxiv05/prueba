#include <iostream>
using namespace std;

struct tiempo {
	int hh;
	int mm;
	int ss;
};

void corregir(tiempo &t) {
	while (t.ss>60) {
		t.ss -= 60;
		++t.mm
	}
	while (t.mm>60) {
		t.mm -= 60;
		++t.hh
	}
}

tiempo suma(tiempo t1, tiempo t2) {
	tiempo tr;
	tr.ss = t1.ss + t2.ss;
	tr.mm = t1.mm + t2.mm;
	tr.hh = t1.hh + t2.hh;
	corregir(tr);
	return tr;
}
tiempo corregir(tr) {
	if(tr.ss>=60) {
		tr.ss=tr.ss-60;
		tr.mm++;
	}
	if (tr.mm>=60) {
		tr.mm=tr.mm-60;
		tr.hh++;
	}
	return tr;
}

int main(int argc, char *argv[]) {
	int a,b,c;
	cin >> a >> b
	return 0;
}

