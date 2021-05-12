#include <iostream>
#include <iomanip>
#include "libjuego.h"
using namespace std;

int main(int argc, char *argv[]) {
	int a, b ;
	cin >> a>> b;
	cout<< sumita (a,b) <<endl;
	llevar_a_mitad (a);
	cout << a<< endl ;
	
	return 0;
}
