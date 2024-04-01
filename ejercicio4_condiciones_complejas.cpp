#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int age1,age2;
	cout<<"Ingrese dos edades"<<endl;
	cin>>age1;
	cin>>age2;
	//Comparo las edades
	if(age1>=18 && age2>=18) 
		cout<<"Ambas personas son mayores de edad"<<endl;
	else {
		if(age1>=18)
			cout<<"Solo la primer persona es mayor de edad";
		else if(age2>=18)
			cout<<"Solo la segunda persona es mayor de edad";
		else
			cout<<"Ninguno es mayor de edad"<<endl;
	}
	return 0;
}

