#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
using namespace std;

float calculadora(float salario, float tiempo);

int main(int argc, char *argv[]) {
	cout<<"Hola usuario"<<endl;
	Sleep(1000);
	cout<<"Ingrese el total de salario"<<endl;
	float salario;
	int tiempo;
	cin>>salario;
	cout<<"Ahora ingrese los años de antiguedad que tiene el trabajador en la empresa "<<endl;
	cin>>tiempo;
	
	float resultado;
	if(tiempo>=1 && tiempo<=5)
		resultado=calculadora(salario,0.05);
	else if(tiempo>5)
		resultado=calculadora(salario,0.10);
	else
		cout<<"No ingreso un tiempo valido"<<endl;
	
	cout<<"El salario mas el bono navideño es: "<<resultado<<endl;
	return 0;
}

float calculadora(float salario, float tiempo) {
	float sal=salario;
	float porcentaje=tiempo;
	
	porcentaje=sal*porcentaje;
	sal=salario+porcentaje;
	return sal;
}

