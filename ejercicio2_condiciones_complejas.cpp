#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese dos cadenas de texto"<<endl;
	string txt1,txt2;
	cout<<"Ingrese la primer cadena por favor"<<endl;
	getline(cin,txt1);
	cout<<"Ingrese la segunda cadena por favor"<<endl;
	getline(cin,txt2);
	
	//Comparo los dos strings
	if(txt1==txt2)
		cout<<"Son iguales los strings"<<endl;
	else
		cout<<"No son  iguales los strings"<<endl;
	return 0;
}

