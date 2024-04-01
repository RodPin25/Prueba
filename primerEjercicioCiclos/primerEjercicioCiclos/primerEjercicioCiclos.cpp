#include <iostream>
#include <cstdlib>

using namespace std;

void menu();
void tablas();
void segundoEjercicio();
void primos();
void pregunta();


int main()
{
    menu();
}

void menu() {
    cout << "Hola usuario" << endl;
    cout << "Seleccione un ejercicio " << endl;
    cout << "1. Tablas de multiplicar" << endl;
    cout << "2. Ingresar un numero y condiciones" << endl;
    cout << "3. Primos" << endl;

    cout << "\nIngrese su seleccion: ";
    int seleccion;
    cin >> seleccion;

    switch (seleccion)
    {
    case 1:
        tablas();
        break;
    case 2:
        segundoEjercicio();
        break;
    case 3:
        primos();
        break;
    default:
        break;
    }
}

void tablas() {
    system("cls");
    cout << "\nIngrese un numero por favor: ";
    int num;
    cin >> num;

    for (int i = 1; i < 11; i++) {
        int resultado = num * i;
        cout << num << " X " << i << " = " << resultado << endl;
    }

    pregunta();
}

void segundoEjercicio() {
    system("cls");
    cout << "\nIngrese un numero: ";
    int num1;
    cin >> num1;

    int suma=0;
    if (num1 % 2 != 0) {
        for (int i = 0; i <= num1; i++) {
            if (i % 2 != 0)
                suma += i;
        }
    }
    else {
        for (int i = 0; i <= num1; i++) {
            if (i % 2 == 0)
                suma += i;
        }
    }

    cout << "El resultado de la suma es: " << suma << endl;

    pregunta();
}

void primos() {
    cout << "\nIngrese un numero: ";
    int num1,contadorPrimos=0;
    cin >> num1;
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0)
            contadorPrimos++;
    }

    if (contadorPrimos <= 2)
        cout << num1 << " es un numero primo" << endl;
    else
        cout << num1 << " no es un numero primo" << endl;

    pregunta();
}

void pregunta() {
    cout << "Desea realizar algun otro ejercicio?" << endl;
    cout << "Presione Y si desea realizar otro ejercicio, en caso contrario presione N" << endl;
    char seleccion;
    cin >> seleccion;

    if (seleccion == 'y') {
        system("cls");
        menu();
    }
    else if (seleccion == 'n') {
        cout << "nos vemos usuario" << endl;
    }
    else {
        cout << "Seleccione una tecla valida" << endl;
        pregunta();
    }
}


