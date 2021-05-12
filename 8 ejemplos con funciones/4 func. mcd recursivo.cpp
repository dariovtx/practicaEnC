// En este ejemplo se leen 2 numeros que deben ser NO NULOS 
//  y se muestra el mcd entre ambos, usando el mètodo de Euclides
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;


int mcd2(int a, int b){
    if (b==0) return a; 
	else return mcd2(b,a%b);
	
}

int main(int argc, char *argv[]) {
	int  x,y;
	cin>>x >>y;
	if (x>=y) cout << mcd2(x,y);
	else cout << mcd2 (y,x);
	return 0;
}

