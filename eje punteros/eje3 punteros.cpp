#include <iostream>
#include <stdlib.h>
#include <time.h>
#define tam 10
using namespace std;

int main(int argc, char *argv[]) {
	int array [tam];
	int *ptrarray [tam];
	srand(time(NULL));
	for(int i=0;i<10;i++){
		array[i]=rand()%100;
	}for (int j=0; j<10;j++){
		ptrarray[j]=&array[j];
		cout<<*ptrarray[j]<<endl;
		cout<<ptrarray[j]<<endl;
	}
	return 0;
}

