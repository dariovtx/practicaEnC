// En este ejemplo se lee una base y un exponente entero
// y se muestra el valor de la potencia correspondiente
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

float pot1 (int x, int y){
    if (y<0) return 1/ (float)pot (x,-y); 
   	else return pot (x,y);
}

int main(int argc, char *argv[]) {
	int a,b;
	cin >> a >>b;
	cout << pot1 (a,b) << endl;
	return 0;
}

