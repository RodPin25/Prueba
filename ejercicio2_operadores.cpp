#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese dos cadenas de texto"<<endl;
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	
	if(str1==str2) {
		cout<<"las cadenas son iguales";
	} else
	   cout<<"Las cadenas son diferentes";
	return 0;
}

