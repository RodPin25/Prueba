#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese dos numeros"<<endl;
	int num1,num2;
	cin>>num1;
	cin>>num2;
	
	char signo;
	cout<<"ahora ingrese el signo de la operacion que desea realizar: "<<endl;
	cin>>signo;
	
	int resultado;
	if(signo=='+') {
		resultado=num1+num2;
		cout<<"El resultado de la suma es: "<<resultado<<endl;
	}
	else if(signo=='-'){
		resultado=num1-num2;
		cout<<"El resultado de la resta es: "<<resultado<<endl;
	}
	else
		cout<<"No ingreso un signo válido"<<endl;
	
	return 0;
}

