#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese un numero"<<endl;
	int num1;
	cin>>num1;
	if(num1>=1 && num1<=100)
		cout<<"Se encuentra dentro del rango";
	else
		cout<<"No se encuentra dentro del rango";
	return 0;
}

