#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1,num2;
	cout<<"Ingrese por favor dos numeros"<<endl;
	cin>>num1;
	cin>>num2;
	if(num1>num2)
		cout<<num1<<" es mayor que "<<num2<<endl;
	else
		cout<<num2<<" es mayor que "<<num1<<endl;
	return 0;
}

