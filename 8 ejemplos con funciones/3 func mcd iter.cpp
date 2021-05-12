// Este es un ejemplo de un programa que lee 2 numeros
//y muestra el maximo común divisor entre ambos
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

int mcd1(int a, int b){
	bool band=false; int j, AUX; 
	if (a<b)
		{AUX= a;
		a=b;
		b=AUX;};
	if (a%b==0) return b;
	
	j= int(a/2);
	while ((j>=2)&&(!band)) {
		if ((a%j==0)&&(b%j==0)) band=true;
		else j--;
	};
	return j;
}

int main(int argc, char *argv[]) {
	int  x,y;
	cin>>x >>y;
	if ((x!=0) &&(y!=0))
		cout << mcd1 (x,y) << endl;
	else  cout << " no se puede calcular";
	return 0;
}

