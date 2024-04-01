#include <iostream>
#include <windows.h>
using namespace std;

bool calculadoraPares(int numero);
int main(int argc, char *argv[]) {
	cout<<"Hola usuario"<<endl;
	Sleep(100);
	cout<<"\nPor favor ingrese un numero: ";
	int num1;
	cin>>num1;
	
	bool resultado=false;
	if(num1>0) {
		resultado=calculadoraPares(num1);
		if(resultado)
			cout<<num1<<" es positivo y es primo"<<endl;
		else
			cout<<num1<<" es positivo y no es primo"<<endl;
	} else {
		resultado=calculadoraPares(num1);
		if(resultado)
			cout<<num1<<" es es negativo y es primo"<<endl;
		else
			cout<<num1<<" es negativo y no es primo"<<endl;
	}
	return 0;
}

bool calculadoraPares(int numero) {
	int num=numero;
	bool primo=false;
	if(num%2==0)
		primo=true;
	else
		primo=false;
	
	return primo;
}

