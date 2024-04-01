#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese su edad"<<endl;
	int age;
	cin>>age;
	if(age>=18)
		cout<<"Es mayor de edad";
	else
		cout<<"Es menor de edad";
	return 0;
}

