#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

//Prototipos de funciones
void menu();
void ejercicioDos();
void ejercicioCuatro();
double conversorMillasYardas(double cantidad);
double conversorMillasPies(double cantidad);
double conversorMillasPulgadas(double cantidad);
void ejercicioSeis();
void pregunta();


//Inicio del  programa
int main()
{
	menu();
}

//funcion para el menu
void menu() {
	system("cls");
	cout << "Seleccione un ejercicio" << endl;
	cout << "2. Divisores de un numero" << endl;
	cout << "4. Conversiones" << endl;
	cout << "6. Bolas de helado" << endl;
	int num1,resul;
	cin >> num1;

	switch (num1) {
	case 2:
		ejercicioDos();
		break;
	case 4:
		ejercicioCuatro();
		break;
	case 6:
		ejercicioSeis();
		break;
	default:
		cout << "Seleccion un numero valido" << endl;
		menu();
		break;
	}
}

void ejercicioDos() {
	cout << "\nIngrese un numero: ";
	int num1;
	cin >> num1;
	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0) {
			cout << num1 << " es divisble exactamente en " << i << endl;
		}
	}

	pregunta();
}

void ejercicioCuatro() {
	cout << "Seleccione su conversion" << endl;
	cout << "1. millas a yardas" << endl;
	cout << "2. millas a pies" << endl;
	cout << "3. millas a pulgadas" << endl;
	int selec;
	double num;
	cout << "\nIngrese su seleccion: ";
	cin >> selec;
	double resultado;
	switch (selec) {
	case 1:
		cout << "Ingrese un numero, puede ser con decimales" << endl;
		cin >> num;
		resultado = conversorMillasYardas(num);
		cout << "El resultado de la conversion de " << num << " millas equivale a: " << resultado << " yardas" << endl;
		break;
	case 2:
		cout << "Ingrese un numero, puede ser con decimales" << endl;
		cin >> num;
		resultado = conversorMillasPies(num);
		cout << "El resultado de la conversion de " << num << " millas equivale a: " << resultado << " pies" << endl;
		break;
	case 3:
		cout << "Ingrese un numero, puede ser con decimales" << endl;
		cin >> num;
		resultado = conversorMillasPulgadas(num);
		cout << "El resultado de la conversion de " << num << " millas equivale a: " << resultado << " pulgadas" << endl;
		break;
	} 


	pregunta();
}

double conversorMillasYardas(double cantidad) {
	int resultado = cantidad * 1760;
	return resultado;
}

double conversorMillasPies(double cantidad) {
	int resultado = cantidad * 5280;
	return resultado;
}

double conversorMillasPulgadas(double cantidad) {
	int resultado = cantidad * 63360;
	return resultado;
}

void ejercicioSeis() {
	cout << "Cuantas bolas de helado desea?" << endl;
	int cantidad;
	cin >> cantidad;

	int contador = 0;
	string sabores = "";
	if (cantidad <= 6) {
		while (contador < cantidad) {
			cout << "Seleccione su sabores de helado" << endl;
			cout << "-";
			string sabor = "";
			cin >> sabor;
			sabores += sabor;
			if (contador < cantidad - 1) {
				sabores += ", ";
			}
			else
				sabores += ".";
			contador++;
		}
	}
	else {
		cout << "El limite de bolas es 6" << endl;
		ejercicioSeis();
	}

	cout << "Los sabores que ingreso son: " << sabores << endl;

	pregunta();
}

void pregunta() {
	cout << "Desea realizar otro ejercicio? (Y/N)" << endl;
	char seleccion;
	cin >> seleccion;
	seleccion = toupper(seleccion);

	if (seleccion == 'Y') {
		menu();
	}
	else if(seleccion=='N')
		cout << "Nos vemos usuario" << endl;
	else {
		cout << "Seleccione una respuesta valida" << endl;
		pregunta();
	}
}

