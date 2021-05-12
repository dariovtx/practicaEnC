#include <iostream>
using namespace std;

bool usuarioValido(string usuario){
	int tam;
	bool valido=false;
	tam=usuario.size();
	if(tam==8 && isalpha(usuario[0])){
		valido=true;
		for(int i=1;i<tam;i++){
			if(!isalnum(usuario[i])){
				valido=false;
			}
		}
	return valido;
	}
}

int main(int argc, char *argv[]) {
	string usuario = "";
	getline(cin,usuario);
	cout << usuarioValido(usuario);
	return 0;
}

