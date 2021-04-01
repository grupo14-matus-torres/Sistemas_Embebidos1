#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

void promedio(int *array){
	int suma=0,promedio=0;
	
	for(int i=0;i<24;i++){
		suma += array[i];
	}
	promedio = suma/24;
	cout << "El promedio de las temperaturas es:  " << promedio <<endl;
}
void mayor(int *array){
	int mayor = 0;
	for(int i=0; i<24;i++){
		if (array[i] > mayor){
			mayor = array[i];
		}
	}
	
	cout << "La temperatura mayor durante el dia fue: " << mayor << " grados   " << endl;
	
}
void menor (int *array){
	int menor = 100;
	for(int i=0;i<24;i++){
		if (array[i] < menor){
			menor = array[i];
		}
	}
	cout << "La menor temperatura durante el dia fue:  " << menor << " grados" << endl;
}

int main(){
	srand(time(NULL));
	int temp;
	int arrayTemp[24];
	
	for(int i=0;i<24;i++){
		arrayTemp[i] =  rand() % 37;  // Entre 0 y 36 Grados Celcius
		cout << "Temperatura a las " << i << " horas:  " << arrayTemp[i] << " grados " << endl;
	}
	cout << endl;
	promedio(arrayTemp);
	mayor(arrayTemp);
	menor(arrayTemp);
	
	return 0;
}
