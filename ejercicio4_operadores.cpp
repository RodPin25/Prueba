#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese dos edades"<<endl;
	int age1,age2;
	cin>>age1;
	cin>>age2;
	
	if(age1==age2)
		cout<<"Tienen la misma edad";
	else
		cout<<"No tienen la misma edad";
	return 0;
}

