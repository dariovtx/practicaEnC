// Este programa lee una poesía en forma corrida con
// un asterisco que separa cada línea. La muestra en reglones
// separados y cuando hay un punto salta 2 renglones
// y la proxima linea comienza con mayuscula 

#include <iostream>
#include <string>
using namespace std ;
int main()
{
	string cita;
	bool b= true;
	
	getline(cin, cita,'*') ;
	cout << endl << endl;
	
	while (cita != "/"){
		if (b) 
			cita[0]=toupper(cita[0]);
		cout << cita<<endl;
		b=cita[cita.size()-1]=='.';
		if (b) 
			cout << endl<< endl;
		getline(cin, cita,'*') ;
	}
}
