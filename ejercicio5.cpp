#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

float media(int n[],int tam){
	int suma = 0;
	double promedio;
	for(int i=0;i<tam;i++){
		suma += n[i];
}
	promedio = suma/tam;
	return promedio;
}
float varianza(int n[], int tam,float p){
	double var,vari;
	for(int i=0;i<tam;i++){
		var += pow(n[i]-p,2);
	}
	vari = var/tam;
	return vari;
}
float desviacion(float var){
	return sqrt(var);
}
float moda(int n[],int tam){
	int v_moda, mayor;
	int frec[12];
	
	for(int i=0;i<tam;i++){
		int s=0;
		for(int j=0;j<tam;j++){
			if(n[i]==n[j] && i!=j){
				s+=1;
			}
		}
		if (s>=mayor){
		mayor = s;
		v_moda = i;}
	}
	cout << "Moda:                 " << n[v_moda];
}

int main(){
	int N = 100;
	int ALU[N], tam;
	int notas[100];
	
	while (tam<1 || tam > 100){
		cout << "Escriba la cantidad de notas que posee el alumno:  " << endl; cin>> tam;
	}
	for(int i=0;i<tam;i++){
		cout << "Escriba la nota numero  " << i+1 << ":" << endl;
		cin >> notas[i];
	}
	cout << endl;
	float prom= media(notas,tam);
	float var = varianza(notas,tam,prom);
	
	
	cout << "Promedio:              " << media(notas,tam) << endl;
	cout << "Varianza:             " << varianza(notas,tam,prom) << endl;
	cout << "Desviacion Estandar:  " << desviacion(var) << endl ;
	moda(notas,tam);
 	getch();
	return 0;
	
}
