#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	float num1=3.1415926;
	float num2=0.12345;
	float*pnum=NULL;
	pnum=&num1;
	cout<<*pnum<<endl;
	num2=*pnum;
	cout<<num2<<endl;
	cout <<&num2<<endl;
	cout<< pnum<<endl;
	return 0;
}

