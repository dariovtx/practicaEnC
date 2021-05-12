// Este es un ejemplo de un programa que debe 
// leer un número y mostrar cuantos digitos tiene

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

int main(int argc, char *argv[]) {
	int x;
	cin >> x;
	cout<< cantDig1(x) <<endl;
	return 0;
}

