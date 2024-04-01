#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
#include <cstdlib>

using namespace std;


int main()
{
	int contador = 10;
	while (contador > 0) {
		cout << contador<<endl;
		contador--;
	}

	cout << "Do-While" << endl;
	contador = 10;
	do {
		cout << contador<<endl;
		contador--;
	} while (contador > 0);

	cout << "Ciclo for" << endl;
	for (int i = 10; i > 0; i--) {
		cout << i << endl;
	}

	cout << "Espere un momento para pasar al siguiente ejercicio" << endl;

	Sleep(10000);
	system("cls");
	cout << "Ejercicio con ingreso de numero" << endl;
	Sleep(1000);
	cout << "Ingrese un limite por favor" << endl;
	int num1;
	cin >> num1;

	int contador2 = 0;

	cout << "ciclo while" << endl;
	while (contador2 <= num1) {
		cout << contador2 << endl;
		contador2++;
	}

	contador2 = 0;
	cout << "ciclo do-while" << endl;
	do {
		cout << contador2 << endl;
		contador2++;
	} while (contador2 <= num1);

	cout << "ciclo for" << endl;
	for (int i = 0; i <= num1; i++) {
		cout << i << endl;
	}
}


/*string palabra;
	cout << "Hola usuario, ingrese una palabra" << endl;
	getline(cin, palabra);

	vector<char> letras;

	cout << "El string que ingreso es: " << palabra << endl;
	for (char& c : palabra) {
		letras.push_back(c);
	}

	int contador = 0;
	char letra;

	for (char num : letras) {
		for (char num2 : letras) {
			if (num == num2)
				contador++;

		}
		if (contador >= 2) {
			letra = num;
			break;
		}

		contador = 0;
	}

	if (contador >= 2)
		cout << "La palabra tiene letras repetidas, se repite "<<letra<< endl;
	else
		cout << "No tiene letras repetidas" << endl;*/

