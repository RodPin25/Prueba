#include <iostream>
#include <stdio.h>
#include <vector>
#include <windows.h>
#include <cstdlib>
using namespace std;


/*Escribir un programa que tome 5 notas de un estudiante.Después, debe promediar las 5 notas y mostrar un mensaje según los siguientes rangos :
Promedio menor a 61 - NO TIENE PERMITIDO HACER SU EXAMEN PRIVADO.
Promedio entre 61 y 75 - SI REALIZA TRABAJO COMUNITARIO, PUEDE HACER SU EXAMEN PRIVADO.
Promedio entre 76 y 85 - PROMEDIO NORMAL, PUEDE HACER SU EXAMEN PRIVADO.
Promedio entre 86 y 90 - PROMEDIO ALTO, SI SE GRADÚA SERÁ CON HONORES.
Promedio entre 91 y 95 - PROMEDIO MUY ALTO, SI SE GRADUÁ SERÁ CON MÁXIMOS HONORES.
Promedio mayor a 95 - PUEDE EXONERARSE DE EXAMEN PRIVADO.
Escribir un programa que tome el salario de una persona, y posteriormente qué evalue cantidad de impuestos debe pagar al mes(5 %, 12 %, 21 %).Calcular el valor de los impuestos dependiendo de los ingresos(menor o igual a 15, 000 al mes paga 5 % .Entre 15, 0001 y 30, 000 al mes, paga 12 % y si gana 30, 001 o más, paga 21 %).Mostrar solo el valor de los impuestos en pantalla.
Crear una calculadora que pregunte una cantidad, posteriormente pregunte si quiere calcular una de las siguientes conversiones, según la fórmula que encuentre en internet :
Kms a metros
Metros a kms
Pies a pulgadas
Pulgadas a pies
Kms a millas*/

//Prototipos de funciones
void menu();
int promedio();
void comparadorPromedio();
void pregunta();
vector<double> calculadoraTaxes();
void mostrarTaxes(vector<double> datos);
void conversiones();


//Comienza el programa
int main()
{
    menu();
    return 0;
}

void menu() {
    system("cls");
    vector<double> datos;
    cout << "Ingrese un numero para seleccionar el ejercicio que desea realizar" << endl;
    cout << "1. Calculadora de promedio para privados" << endl;
    cout << "2. Calculadora de impuestos" << endl;
    cout << "3. Calculadora de conversiones" << endl;
    cout << "4. Salir" << endl;
    int num1;
    cin >> num1;
    
    switch (num1)
    {
    case 1:
        comparadorPromedio();
        break;
    case 2:
        datos = { calculadoraTaxes() };
        mostrarTaxes(datos);
        break;
    case 3:
        conversiones();
        break;
    case 4:
        cout <<"Nos vemos usuario" << endl;
        break;
    default:
        cout << "Seleccione un numero valido." << endl;
        menu();
        break;
    }
}

    int promedio() {
        system("cls");
        vector<int> notas;
        for (int i = 0; i<=5; i++) {
            int note;
            cout << "\nIngrese una nota: ";
            cin >> note;
            notas.push_back(note);
        }

        int resultado = 0;
        for (int i = 0; i < notas.size(); i++) {
            resultado += notas[i];
        }
        resultado = resultado / 5;
        return resultado;
    }

    void comparadorPromedio() {
        system("cls");
        int prom = promedio();
        if (prom < 61)
            cout << "No tiene permitido realizar su examen privado" << endl;
        else if (prom >= 61 && prom <= 75)
            cout << "Puede realizar su examen privado, si realiza trabajo comunitario" << endl;
        else if (prom >= 76 && prom <= 85)
            cout << "Tiene un promedio normal, puede realizar su examen privado" << endl;
        else if (prom >= 86 && prom <= 90)
            cout << "Tiene un promedio alto, se podrá graduar con honores" << endl;
        else if (prom >= 91 && prom<= 95)
            cout << "Tiene un promedio muy alto, se podrá graduar con los máximos honores" << endl;
        else if (prom > 95)
            cout << "Se exónera de los examenes privados" << endl;
        else
            cout << "No se tiene un dato válido de promedio" << endl;

        pregunta();
    }

    void pregunta() {

        cout << "Desea realizar algun otro ejercicio" << endl;
        char seleccion;
        cin >> seleccion;
        if (seleccion == 'S') {
            cout << "Regresando al menu" << endl;
            Sleep(1000);
            menu();
        }
        else if (seleccion == 'N') {
            cout << "Nos vemos usuario" << endl;
        }
        else {
            cout << "Por favor seleccione una opcion valida" << endl;
            Sleep(1000);
            pregunta();
        }
    }

    vector<double> calculadoraTaxes() {
        double porcentaje, salario;
        cout << "Ingrese su salario" << endl;
        cout << "\nQ.";
        cin >> salario;
        if (salario <= 15000)
            porcentaje = 0.05;
        else if (salario >= 15001 && salario <= 30000)
            porcentaje = 0.10;
        else
            porcentaje = 0.21;


        double taxes = salario * porcentaje;

        vector<double> datos = { salario,porcentaje };

        return datos;
    }

    void mostrarTaxes(vector<double> datos) {
        cout << "Usted tiene que pagar " << datos[0] << " quetzales de impuestos" << endl;
        cout << "Y tiene que pagar un " << datos[1] << "% de su salario en impuestos" << endl;

        pregunta();
    }

    //Convertidores de unidades de medidas
    double KmsMetros(double cantidad) {
        double resultado = cantidad * 1000;
        return resultado;
    }

    double MetrosKms(double cantidad) {
        double resultado = cantidad / 1000;
        return resultado;
    }

    double PiesPulgadas(double cantidad) {
        double resultado=cantidad*12;
        return resultado;
    }
    double PulgadasPies(double cantidad) {
        double resultado=cantidad/12;
        return resultado;
    }
    double KmsMillas(double cantidad) {
        double resultado = cantidad / 1.6;
        return resultado;
    }
    //Convertidores

    void conversiones() {
        system("cls");
        cout << "\nIngrese una cantidad: ";
        double cantidad;
        cin >> cantidad;

        cout << "Ahora seleccione que conversion desea realizar marcando el numero de la conversion." << endl;
        cout << "1.Kms a Metros" << endl;
        cout << "2. Metros a Kms" << endl;
        cout << "3. Pies a pulgadas" << endl;
        cout << "4. Pulgadas a pies" << endl;
        cout << "5. Kms a millas" << endl;
        int selec;
        cin >> selec;

        double conversion=0;
        switch (selec) {
        case 1:
            conversion = KmsMetros(cantidad);
            cout << "La conversion de " << cantidad << " Kms a metros es: " << conversion<<" metros" << endl;
            break;
        case 2:
            conversion = MetrosKms(cantidad);
            cout << "La conversion de " << cantidad << " metros a Kms es: " << conversion<<"kms" << endl;
            break;
        case 3:
            conversion = PiesPulgadas(cantidad);
            cout << "La conversion de " << cantidad << " pies a pulgadas es: " << conversion<<" pulgadas." << endl;
            break;
        case 4:
            conversion = PulgadasPies(cantidad);
            cout << "La conversion de " << cantidad << " pulgadas a pies es: " << conversion <<" ft." << endl;
            break;
        case 5:
            conversion = KmsMillas(cantidad);
            cout << "La conversion de " << cantidad << " Kms a millas es: " << conversion <<" Millas." << endl;
            break;
        default:
            cout << "No selecciono una conversion valida" << endl;
            break;
        }

        pregunta();
    }