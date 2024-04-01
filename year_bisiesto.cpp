#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Por favor ingrese un año "<<endl;
	int year;
	cin>>year;
	
	if(year%4==0 && year%10!=0) {
		cout<<"Es un año bisiesto";
	} else {
		cout<<"No es un año bisiesto";
	}
	return 0;
}

