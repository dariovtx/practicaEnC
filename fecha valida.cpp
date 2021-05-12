#ifdef __MSDOS__
#include <iostream.h>
#include <stdlib.h>
#else
#include <iostream>
#include <cstdlib>
using namespace std;
#endif

int main ()
{
	int anno, dia, mes;
	cout << "Ingrese el valor de año entre 1900 y 2013: ";
	cin >> anno;
	cout << "Ingrese el valor de dia: ";
	cin >> dia;
	cout << "Ingrese el valor de mes: ";
	cin >> mes;
	if(anno<1900||anno>2013||mes<1||mes>12||dia<1||dia>31||((mes==4||mes==6||mes==9||mes==11)&&dia==31)||(mes==2&&dia>29)||(mes==2&&(anno%4!=0&&anno%100==0)&&anno%400!=0&&dia==29))
		cout << "fecha invalida" << endl;
	else
		cout << "fecha valida" << endl;
	cout << endl;
	system ("pause");
	return EXIT_SUCCESS;
}
