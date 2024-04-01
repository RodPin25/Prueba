#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Hola usuario, por favor ingrese tres numeros"<<endl;
	int n1,n2,n3;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	
	
	if(n1>n2 && n1>n3) {
		cout<<n1<<" es numero mayor"<<endl;
	} else if(n2>n1 && n2>n3) {
		cout<<n2<<" es el numero mayor"<<endl;
	} else {
		cout<<n3<<" es el numero mayor"<<endl;
	}

	
	return 0;
}

