#include <iostream>
using namespace std;

bool registrar(string usuario);

int main(int argc, char *argv[]) {
	string usuario;
	bool pass;
	cin>>usuario;
	pass= registrar(usuario);
	cout<<pass;
	return 0;
}

bool registrar(string usuario){
	
	if ((usuario.size()==8) && (usuario[0]>='A' && usuario[0]<'z')){
		return true;
	}
	else{ 
		return false;
	}
	
		
} 
	
