#include <iostream>
#include <windows.h>
#include <conio.h>
 
using namespace std;
 
int** crear_matriz_int(int n, int m){
   int** X = new int*[n];
   for(int i = 0; i < n; i++){
      X = new int[m];
   };
   return X;
};
 
void liberar_matriz_int(int** X, int n, int m){
    for(int i = 0; i < n; i++){
       delete[] X;
    };
    delete[] X;
    return;
};
 
int** leer_matriz_int(istream& is, int** X, int n, int m){
    for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           is >> X[j];
       };
    };
    return X;
};
 
ostream& escribir_matriz_int(ostream& os, int** X, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           os << X[j];
           if(j < m - 1){
              os << "\t";
           };
        };
        os << "\n";
    };
    return os;
};
 
ostream& imprime_matriz_game(ostream& os, int** X, int n, int m){
    os << "\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(X[j] == 1){
               os << (char)254;
               if(j < m - 1){
                  os << " ";
               };
           }else if(X[j] == -1){
               os << (char)2;
               if(j < m - 1){
                  os << " ";
               };
           }else if(X[j] == -2){
               os << (char)177;
               if(j < m - 1){
                  os << " ";
               };
           }else{
               os << " ";
               if(j < m - 1){
                  os << " ";
               };
           };
        };
        os << "\n";
    };
    return os;
};
 
 
int** inicializar_matriz(int** X, int n, int m){
    for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           X[j]=0;
       };
    };
    return X;
};
 
int** poner_rastro(int** X, int n, int m){
    for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           if(X[j] == 1){
               X[j] = -1;
           };
       };
    };
    return X;
};
 
int** poner_personaje(int** X, int n, int m, int posf, int posc){
    X[posf][posc] = 1;
    return X;
};
 
 
int** poner_obstaculos(int** X, int n, int m){
    X[2][0] = -2;
    X[2][1] = -2;
    X[2][2] = -2;
    X[2][3] = -2;
    X[2][4] = -2;
    X[2][5] = -2;
    X[5][4] = -2;
    X[6][3] = -2;
    X[7][2] = -2;
    X[8][1] = -2;
    X[9][0] = -2;
    return X;
};
 
int calcular_puntaje(int** X, int n, int m){
int puntaje=0;
for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(X[j]==-1){
  puntaje++;
}}}
return puntaje;
};
 
int** transponer_mapa(int** X, int**Y, int n, int m, int posf, int posc){//transponer
 
  for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
           Y[j]=X[j];
       };
       Y[posf][posc]=X[posc][posf];
    };
    return Y;
};
 
 
int main(){
    int n = 10;
    int m = 10;
    int r = 2;
    int k = 500;
    //ifstream ifs("mat.txt");
    int **A = crear_matriz_int(n,m);
    int **B = crear_matriz_int(n,m);
    char c = 0;
    int x = 0;
    int posf = 4;
    int posc = 3;
    int i;
 
    int modo = 0;
 
    do{
        cout << "Bienvenido\n";
        cout << "Digite el modo de juego:\n";
        cout << "1. No Toroidal\n";
        cout << "2. Toroidal\n";
        cin >> modo;
        system("cls"); //limpia pantalla
    }while(modo != 1 && modo != 2);
 
    A = inicializar_matriz(A, n, m);
    A = poner_obstaculos(A,n,m);
 
    A = poner_personaje(A, n, m, posf, posc);
    i = 750;
 
    while((c != 'p')){
       cout << "Presione 'p' para salir\n";
       cout << "fil:" << posf;
       cout << ", col:" << posc;
       cout << ", puntaje:" << calcular_puntaje(A, n, m);
 
       if(c == 't'){ //aqui se transpone el mapa, me falta cambiar los controles
            A = transponer_mapa(A,B,n, m,posf,posc);
            c = 0;
       };
 
       A = poner_rastro(A, n, m);
       A = poner_personaje(A, n, m, posf, posc);
       imprime_matriz_game(cout, A, n, m);
 
 
       Beep( i, k );
       k -= 10;
 
       if(k < 10){
        k = 10;
       };
 
       switch(c){
         case 72:
             posf --;
             if(posf < 0){
                 if(modo == 1){
                    posf = 0;
                 }else{
                posf=n-1;
                 };
             };
             break;
         case 80:
             posf ++;
             break;
         case 75:
             posc --;
             if(posc < 0){
                if(modo == 1){
                    posc = n;
                }else{
                  posc=m-1;
                };
             };
             break;
         case 77:
             posc ++;
             break;
       };
 
       if(modo == 1){
          if(posf == n){
            posf = n-1;
          };
 
          if(posc == m){
            posc = m-1;
          };
       }else{
      if(posf == n){
            posf = 0;
          };
 
          if(posc == m){
            posc = 0;
          };
 
       };
 
       if(A[posf][posc] == -1 || A[posf][posc] == -2){
           cout << "muere!";
           Beep( 900 , 1000 );
           break;
       };
 
       if(kbhit()){
          c = getch();
       };
       system("cls");
     };
 
     liberar_matriz_int(A, n, m);
 
     if (c == 'p'){
          system("cls");
          cout<< "       Gracias por jugar         \n";
          cout<< "             :D ";
          cout<< "\n";
     };
     system("pause");
     return 0;
};
