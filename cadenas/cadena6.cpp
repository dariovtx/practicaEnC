#include <iostream>
#include <string>
using namespace std ;
// -- Subalgoritmos ----
void mayuscula (char& letra)
{
	if ((letra >= 'a') && (letra <= 'z')) {
		letra = letra - 'a' + 'A' ;
	}
}
void mayusculas (string& palabra)
{
	for (unsigned i = 0 ; i < palabra.size() ; ++i) {
		mayuscula(palabra[i]) ;
	}
}
// -- Principal --------
int main ()
{
	string palabra ;
	cin >> palabra ;
	mayusculas(palabra) ;
	cout << palabra << endl ;
}
