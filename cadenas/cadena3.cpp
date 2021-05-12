#include <iostream>
#include <string>
using namespace std ;

const char DELIMITADOR = '.' ;
int main()
{
	string nombre ;
	cout << "Introduzca el nombre: " ;
	getline(cin, nombre, DELIMITADOR) ;
	cout << "Nombre: " << nombre << endl ;
	
}
