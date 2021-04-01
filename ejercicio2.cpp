#include <iostream>
#include <stdio.h>
using namespace std;

float temperatura(float n){
	float t;
	t = (n/4)+40;
	return t;
}
void conversion(float n){
	float t = temperatura(n);
	cout << "La temperatura en grados Celsius es:  " << ((t-32) * 5/9)<< endl;
		
}
int main(){
	int n;
	
	cout << "Cuantas veces hicieron sonar la chicharra en un minuto?:  "; cin>>n;
	float t = temperatura(n);
	
	cout << "La temperatura en grados Fahrenheit es:  " << t << endl;
	conversion(n);

	return 0;

}
