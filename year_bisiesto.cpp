#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Por favor ingrese un a�o "<<endl;
	int year;
	cin>>year;
	
	if(year%4==0 && year%10!=0) {
		cout<<"Es un a�o bisiesto";
	} else {
		cout<<"No es un a�o bisiesto";
	}
	return 0;
}

