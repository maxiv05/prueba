#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b;
	printf ("escriba un primer valor""\n"); cin >> a;
	printf ("escriba un segundo valor""\n"); cin >> b;

		float porc_hecho = float(a)*100/float(b);
		float porc_hacer = 100 - float (porc_hecho);

		cout <<"está hecho un" << " " << porc_hecho << "%" << "\n";
		cout << "falta un" <<" " << porc_hacer << "%";
		
	return 0;
}

