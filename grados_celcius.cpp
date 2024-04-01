#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"ingrese una temperatura en grados celcius"<<endl;
	int temp;
	cin>>temp;
	
	if(temp<2)
		cout<<"Hace frio"<<endl;
	else if(temp>=2 && temp<10)
		cout<<"Es templado"<<endl;
	else
		cout<<"Es caliente"<<endl;
	return 0;
}

