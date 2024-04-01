#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1,num2;
	cout<<"Ingrese dos numeros por favor"<<endl;
	cin>>num1;
	cin>>num2;
	
	if(num1==num2)
		cout<<"Son iguales los dos numeros";
	else
		cout<<"No son iguales los numeros";
	return 0;
}

