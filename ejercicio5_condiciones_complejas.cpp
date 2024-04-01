#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1;
	cout<<"Ingrese un numero"<<endl;
	cin>>num1;
	
	if(num1>=500 && num1<=1000)
		cout<<"Esta dentro del rango"<<endl;
	else
		cout<<"Esta fuera del rango"<<endl;
	
	
	return 0;
}

