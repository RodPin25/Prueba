#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese su ms de nacimiento"<<endl;
	string month;
	getline(cin,month);
	month=tolower(month);
	if(month=="JULIO")
		cout<<"Nacio en Julio";
	else
		cout<<"No nacio en julio";
	return 0;
}

