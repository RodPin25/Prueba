#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese un a�o"<<endl;
	int year;
	cin>>year;
	
	if(year%4==0) 
		cout<<"Es a�o bisiesto"<<endl;
	else
		cout<<"No es anio bisiesto"<<endl;
	return 0;
}

