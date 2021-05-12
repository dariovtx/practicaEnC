#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
	string tel;
	char c;
	int tam;
	int contA=0, contE=0, contI=0, contO=0, contU=0, contesp=0, ultimoespacio=0, palabras7=0;
	float porcen, costo=0;
	cout<<"INGRESE EL TELEGRAMA"<<endl;
	getline(cin,tel);
	tam = tel.size();
	for (int i=0;i<tam;i++){
		c= tel[i];
		
		if(c=='a' || c=='A'){
			contA++;
		}
		if(c=='e' || c=='E'){
			contE++;
		}
		if(c=='i' || c=='I'){
			contI++;
		}
		if(c=='o' || c=='O'){
			contO++;
		}
		if(c=='u' || c=='U'){
			contU++;
		}
		if(c==' ' || c== '.'){
			costo+=5.2;
			if((i-ultimoespacio)>=7){
				palabras7++;
			}
			ultimoespacio=i;
		}
		if(c==' '){
			contesp++;
		}
	}
	cout<<"El telegrama ingresado consta de:"<<endl;
	cout<<"Cantidad de vocales: "<<contA+contE+contI+contO+contU<<endl;
	cout<<"a: "<<contA<<endl;
	cout<<"e: "<<contE<<endl;
	cout<<"i: "<<contI<<endl;
	cout<<"o: "<<contO<<endl;
	cout<<"u: "<<contU<<endl;
	porcen= (contesp*100.00)/tam;
	cout<<setprecision(4)<<porcen<<fixed<<"% de espacios en blanco sobre el total de caracteres."<<endl;
	cout<<palabras7<<" palabras con mas de 7 letras"<<endl;
	cout<<"Costo del telegrama: "<<setprecision(2)<<costo<<fixed<<"$"<<endl;
	
	
	
	
	
	return 0;
}

