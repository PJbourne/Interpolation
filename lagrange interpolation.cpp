#include <iostream>
#include <math.h>
#define A 50
using namespace std;

void read();
void lg();
bool rep = 0;
char ex;
int n, i, j;
double X[A], Y[A], L[A], fx[A], NUM, DEN, x, FX;
/*
num =   numerator
den =   denominator
n   =   store x value
FX  =   result (f(x) or Y) of interpolation with the new x
X[A]    = array to store knowns x values
Y[A]    = array to store knowns y values
L[A]    = array to store L(x) values
fx[a]   = array to store the terms (Y*L(x))
*/
int main(){
    while(rep == 0){
    read();
    lg();
    cout << "\n\n" << FX;
    cout << "\n\n Deseja sair?(S=sim/N=nao/)";
    cin >> ex;
    if(ex == 'N' || ex == 'n'){
        system("cls");        //cout << "\n\n\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    }else{
        rep=1;
    }
    }
    return 0;
}
// lagrange method
void lg(){
    for(i=0; i<n; i++){
        NUM = 1;
        DEN = 1;
            for(j=0; j<n; j++){
                if(i != j){

                    NUM *= x - X[j];
                    DEN *= X[i] - X[j];
                    cout << " " << NUM << " \t " << DEN << " \t i " << i << " \t j " << j << "\n";
            }
        }
        L[i]= NUM / DEN;
        cout << "-------------------------------------------------\n";
        cout << NUM << "\t " << DEN << "\n";
    }
for(int m=0; m<n; m++){
    fx[m] = Y[m] * L[m];
    cout << L[m] << "\n";
}
for(int l=0; l<n; l++){
    FX += fx[l];
}
}
//read the entries
void read(){
    cout << "Entre o numero de pontos: ";
    cin >> n;
    cout << "Entre com os valores X e Y separados por espaço e presse ENTER: \n";
    for(i=0; i<n; i++){
        cout << i <<" º  \t";
        cin >> X[i] >> Y[i];
    }
    cout << "\nEntre com o X desejado: ";
    cin >> x;
}
