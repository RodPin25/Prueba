#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int year;
	cout<<"Ingrese un numero"<<endl;
	cin>>year;
	if(year%4==0 && year%10==0)
		cout<<"Es bisiesto y es divisible entre 10"<<endl;
	else {
		if(year%4==0)
			cout<<"Es bisiesto pero no es divisible entre 10"<<endl;
		else if(year&10==0)
			cout<<"Es divisible entre 10 pero no es bisiesto"<<endl;
		else
			cout<<"No cumple ninguna de las dos condiciones"<<endl;
	}
	return 0;
}

