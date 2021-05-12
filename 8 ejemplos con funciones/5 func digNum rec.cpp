// Este ejemplo leer un número y muestra la cantidad de dígitos
//que tiene, de 2 maneras: iterativa y recurtsiva. Además muestra
// la cantidad de dígitos pares de ese número 
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int cantDig1 (int a){
	int p=0;
	if (a==0) return 1;
	while (a>0){
		p++;
		a= a/10;
	};
	return p;
}
int cantDig2 (int x){
	if (x<10) return 1;
	else return 1 + cantDig2(x/10);	
}	

int cantDigPar (int x){
	if (x<10) {if (x%2==0) return 1;
	           else return 0;} 
	else {if (x%2==0) return 1 + cantDigPar(x/10);	
	      else return cantDigPar(x/10);};
}	

int main(int argc, char *argv[]) {
	int x;
	cin >> x;
	cout<< cantDig1(x) <<endl;
	cout << cantDig2 (x)<< endl ;
	cout<< cantDigPar (x); 
	
	return 0;
}

