#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese un número"<<endl;
	int num;
	cin>>num;
	
	if(num>0)
		cout<<num<<" es positivo"<<endl;
	else 
		cout<<num<<" es negativo"<<endl;
	
	
	return 0;
}

