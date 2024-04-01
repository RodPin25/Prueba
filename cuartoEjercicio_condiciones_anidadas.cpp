#include <iostream>
using namespace std;

int promedio(int n1,int n2,int n3) {
	int nota=n1,nota2=n2,nota3=n3;
	int suma=nota+nota2+nota3;
	suma=suma/3;
	return suma;
}

int main(int argc, char *argv[]) {
	cout<<"Hola usuario, por favor ingrese tres notas"<<endl;
	int nota,nota2,nota3;
	
	cin>>nota;
	cin>>nota2;
	cin>>nota3;
	
	if(nota>=61 && nota2>=61 && nota3>=61) {
		int resultado=promedio(nota,nota2,nota3);
		cout<<"El primedio del estudiante es: "<<resultado<<endl;
	} else
	   cout<<"Debe tener todas las materias en limpio"<<endl;
	return 0;
}

