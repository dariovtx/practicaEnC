#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int array2[20]={5,4,3,2,1,6,8,7,20,9,10,13,11,12,14,15,17,16,18,19};
	int a;
	for(int z=0;z<20;z++){
	for(int i=0;i<19;i++){
		if(array2[i]>array2[i+1]){
			a=array2[i];
			array2[i]=array2[i+1];
		array2[i+1]=a;
			
			
		}
		
	}}
	for(int s=0;s<20;s++){
		cout<<array2[s]<<endl;
	}
	
	return 0;
}

