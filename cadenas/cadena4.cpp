#include <iostream>
#include <string>
using namespace std ;
int main()
{
	string nombre ;
	int edad ;
	for (int i = 0; i < 5; ++i) {
		cout << "Introduzca el nombre: " ;
		getline(cin, nombre) ;
		cout << "Introduzca edad: " ;
		cin >> edad ;
		cout << "Edad: " << edad << " Nombre: [" << nombre << "]" << endl ;
	}
}
