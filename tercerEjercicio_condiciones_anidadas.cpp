#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"\nHola usuario, ingrese tres lados de un triángulo: "<<endl;
	int lado1,lado2,lado3;
	cin>>lado1;
	cin>>lado2;
	cin>>lado3;
	
	if(lado1==lado2 && lado2==lado3)
		cout<<"Usted ingreso un triángulo equilatero"<<endl;
	else if((lado1!=lado2 && lado2==lado3)|| (lado1==lado2 && lado2!=lado3) || (lado1==lado3 && lado2!=lado3))
		cout<<"Usted ingreso un triángulo isósceles"<<endl;
	else
		cout<<"Usted ingreso un triángulo escaleno"<<endl;
	
	
	return 0;
}

