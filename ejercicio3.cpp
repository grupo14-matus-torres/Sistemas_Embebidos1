#include <time.h>
#include <iostream>
#include <time.h>
#include <cstdlib>
#define byte 8
using namespace std;

void aBinario(int arrayBin[], int nToBin){
    arrayBin[byte];
    nToBin;
    for (int i = 7; i >= 0; i--){
        arrayBin[i] = nToBin % 2;
        nToBin = nToBin/2; 
    }
}

void imprimirBinario(int arrayBin[]){ 
   for (int i = 0; i<8; i++){
        cout << arrayBin[i] << " ";
    }
    cout << endl; 
}

void imprimirPines(int arrayBin[]){
    for (int i = 7; i>=0; i--){
        if (arrayBin[i] == 1){
            cout << "El led del pin N " << 7-i << " esta ON :D "; 
        }else {
            cout << "El led del pin N " << 7-i << " esta OFF  :(";
        }
        cout << endl;
    }
}

int main(){
    srand(time(NULL));
	int arrayBin[8];
    int numeroBin;
    numeroBin = rand() % 255;
    cout << "El numero es:  " << numeroBin << endl;
    aBinario(arrayBin, numeroBin);
    imprimirBinario(arrayBin);
    cout << endl;
    imprimirPines(arrayBin);
    cout << endl;

}
