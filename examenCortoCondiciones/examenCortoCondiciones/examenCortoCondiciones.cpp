#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

//Prototipos de funciones
void menu();
void pregunta();
void contrasena();
void bisiesto();
void calculadora();
//Prototipos de funciones

//Comienza el programa
int main()
{
	menu();
}

void menu() {
	system("cls");
	cout << "Hola usuario, bienvenido" << endl;
	Sleep(1000);
	cout << "1. Ingresar una contraseña" << endl;
	cout << "2. Año bisiesto" << endl;
	cout << "3. IMC" << endl;
	cout << "Seleccione cualquiera de los ejercicios marcando el numero que le corresponde" << endl;
	int selec;
	cin >> selec;

	if (selec == 1) {
		contrasena();
	}
	else if (selec == 2) {
		bisiesto();
	}
	else if (selec == 3) {
		calculadora();
	}
	else {
		cout << "Seleccione un ejercicio valido" << endl;
		menu();
	}
}
void contrasena() {
	system("cls");
	cout << "Ingrese una contrasena" << endl;
	cout << "Esta contrasena tiene que tener al menos5 caracteres de longitud" << endl;
	cout << "Solo puede ser numerica." << endl;
	cout << "Tiene que ser divisible entre 3" << endl;
	cout << "No tiene que ser un numero par" << endl;

	int contra;
	cin >> contra;

	if (contra / 10000 >= 1) {
		if (contra % 2 != 0) {
			if (contra % 3 == 0) {
				cout << "La contraseña es correcta" << endl;
			}
			else
				cout << "La contra no es correcta por que no es divisible entre 3" << endl;
		}
		else
			cout << "La contra no es correcta por que es par" << endl;
	}
	else
		cout << "La contrasena tiene menos de los 5 caracteres" << endl;
}

void bisiesto() {
	cout << "Por favor ingrese un año" << endl;
	int year;
	cin >> year;

	if (year % 4 == 0 && year % 10 != 0) {
		if (year % 400 > 0) {
			cout << year << " es bisiesto" << endl;
		}
		else
			cout << year << " no es bisiesto" << endl;
	}
	else
		cout << year << " no es bisiesto" << endl;

	pregunta();
}

void calculadora() {
	cout << "Ingrese su peso en Kilogramos" << endl;
	float peso, estatura;
	cin >> peso;
	cout << "Ahora su estatura en metros" << endl;
	cin >> estatura;

	int estaturaFinal = estatura * estatura;

	double imc = peso / estaturaFinal;
	

	if (imc < 18.5)
		cout << "Tiene un IMC bajo, ya que es: " << imc << endl;
	else if (imc >= 18.5 && imc <= 25)
		cout << "Tiene un IMC normal ya que es de: " << imc << endl;
	else if (imc > 25 && imc <= 30)
		cout << "Tiene un IMC con sobrepeso ya que es de: " << imc << endl;
	else if (imc > 30)
		cout << "Tiene un IMC que indica obesidad ya que es de: " << imc << endl;


	Sleep(10000);
	pregunta();
}

void pregunta() {
	system("cls");
	cout << "Desea realizar algun otro ejercicio?" << endl;
	cout << "(Y/N)" << endl;
	char selec;
	cin >> selec;

	if (selec == 'Y')
		menu();
	else if (selec == 'N') 
		cout << "Nos vemos usuario" << endl;
	else {
		cout << "Seleccione una opcion valida" << endl;
		pregunta();
	}
}