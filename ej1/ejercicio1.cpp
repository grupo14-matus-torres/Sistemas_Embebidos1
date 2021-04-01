#include <stdio.h>
#include <iostream>
using namespace std;
void resolver(int CLA,int CAT,int ANT){
	int RES = 0;
	switch(CAT){
		case 3:
			if (ANT >= 5){
				RES = 1;
			}
			else{
				RES = 0;
			}
			
			break;
		case 4:
			if (ANT >= 5){
				RES = 1;
			}
			else{
				RES = 0;
			}
			
			break;
		case 2:
			if (ANT >=7){
				RES = 1;
			}
			else{
				RES = 0;
			}
			
			break;
		default: 
			RES == 0;
		}
	if (RES == 0){
		cout << "El trabajador no cumple con los requisitos" << endl;
	}else{
		cout << "El trabajador si cumple con los requisitos!!" <<endl;
	}
}


int main(){
	int CLA, CAT, ANT, SAL, RES=0;
	
	cout << "======================================" << endl << "Ingrese los datos del trabajador (Clave, Categoría y antigüedad): " << endl;	cin >>CLA>>CAT>>ANT;
	resolver(CLA,CAT,ANT);
	
	
	return 0;
	
}
