// Este programa pide el niombre y apellido y generate
// una clave formada por la primera letra del nombre,
// luego las 5 primeras letras del apellido y por 
// último la long de nombre seguido de apellido

#include <iostream>
#include <string>
using namespace std ;
int main()
{
	string nombre, apellido, usuario, aux  ;
	int k;
	char p,q;
	cout << "Introduzca el nombre: " ;
	getline(cin, nombre) ;
	cout << endl <<"Introduzca el apellido: " ;
	getline(cin, apellido) ;
	usuario = nombre[0]; 
	aux= apellido.substr(0,5); 
	usuario= usuario + aux;
	aux= nombre + apellido;
	cout << aux;
	k= aux.size ();
	p= '0'+k/10;
	q= '0'+k%10;
	usuario= usuario + p+q;
	cout << endl <<"Usuario: " << usuario << endl ;
}
