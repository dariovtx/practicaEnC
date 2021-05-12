//Este ejemplo lee de entrada un carater y si es una letra
// muestra la letra en miniscula y en mayuscula. 
// USA PASAJE POR REFERENCIA 
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

void completar (char a, char& i, char& y){
    i= tolower(a);
	y= toupper (a);
	
	return;
}
	
int main(int argc, char *argv[]) {
	char c, may, min;
	
	cin >> c;
	if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
	completar (c,min,may);
	cout << "letra:" <<c << "    mayusc:" <<may<<"     minus:" << min;
	
	return 0;
}

