#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese dos numeros"<<endl;
	int num1,num2;
	cin>>num1;
	cin>>num2;
	if(num1!=num2)
		cout<<"Los numeros son diferentes"<<endl;
	else
		cout<<"Los numeros son iguales"<<endl;
	return 0;
}

