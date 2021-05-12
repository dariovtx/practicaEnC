//Este programa lee una base y un exponente entero positivo 
// y muestra el valor de la potencia corrrespondiente
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int pot (int x, int y){
    if (y==1) return x;
	else return x* pot (x,y-1);
}

int main(int argc, char *argv[]) {
	int a,b;
	cin >> a >>b;
	cout<< pot (a,b) <<endl;
	
	return 0;
}

