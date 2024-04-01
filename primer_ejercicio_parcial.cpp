#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Hola usuario"<<endl;
	Sleep(100);
	cout<<"Ingrese su edad: ";
	int edad;
	cin>>edad;
	cout<<"Tu edad es de: "<<edad<<" años"<<endl;
	return 0;
}

