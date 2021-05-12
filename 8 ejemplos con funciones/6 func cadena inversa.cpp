// Este programa llama a una función que lee un texto de entrada 
// que termina con punto y lo muestra invertido
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

void leerEinvertir (void){
    char c;
	cin >> c;
	if (c=='.' ) return;
	leerEinvertir ();
	cout << c;
	return;
}
	

int main(int argc, char *argv[]) {
	leerEinvertir ();
	
	return 0;
}

