#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <conio.h>
using namespace std;

//Prototipos de funciones 
void menu();
void coffee();
void chocolate();
void tea();
void end();
string mayuscular(string palabra);
string azucar(string tipo);
//Prototipos de funciones

int main(int argc, char *argv[]) {
	menu();
	return 0;
}
void menu() {
	system("cls");
	cout<<"Hola usuario"<<endl;
	Sleep(1000);
	cout<<"Que tipo de bebida desea tomar?"<<endl;
	cout<<"Café"<<endl;
	cout<<"Chocolate"<<endl;
	cout<<"Agua"<<endl;
	cout<<"Té"<<endl;

	string seleccion="";
	getline(cin, seleccion);
	seleccion=mayuscular(seleccion);
	
	if (seleccion == "CAFE") {
		coffee();
	} else if (seleccion == "CHOCOLATE") {
		chocolate();
	} else if (seleccion == "AGUA") {
		cout << "Se le servirá agua" << endl;
		end();
	} else if (seleccion == "TE") {
		tea();
	} else {
		cout << "Opción no válida" << endl;
	}
}

void coffee(){
	system("cls");
	cout<<"Que tipo de café desea ordenar?"<<endl;
	cout<<"Cafe negro"<<endl;
	cout<<"Capucchino"<<endl;
	cout<<"Expreso"<<endl;
	cout<<"Cafe frio"<<endl;
	string tipo;
	getline(cin,tipo);
	tipo=mayuscular(tipo);
	string result;
	if(tipo=="CAFE NEGRO" || tipo=="NEGRO") {
		result=azucar("cafe negro");
		cout<<result<<endl;
		end();
	} else if(tipo=="CAPUCCHINO") {
		result=azucar("capucchino");
		cout<<result<<endl;
		end();
	} else if(tipo=="EXPRESO") {
		result=azucar("expreso");
		cout<<result<<endl;
		end();
	} else if(tipo=="CAFE FRIO") {
		result=azucar("cafe frio");
		cout<<result<<endl;
		end();
	} else {
		cout<<"Elija un tipo valido de cafe"<<endl;
		coffee();
	}
}

void chocolate() {
	system("clear");
	cout<<"Desea su chocolate con leche o simple?"<<endl;
	string eleccion;
	getline(cin,eleccion);
	eleccion=mayuscular(eleccion);
	if(eleccion=="CON LECHE")
		cout<<"Se le preparara un chocolate con leche"<<endl;
	else if(eleccion=="SIMPLE")
		cout<<"Se le preparara un chocolate con leche"<<endl;
	else{
		cout<<"Seleccione un tipo valido"<<endl;
		chocolate();
	}
	end();
}

void tea() {
	system("cls");
	cout<<"Que sabor de te desea?"<<endl;
	cout<<"Sabores disponibles"<<endl;
	cout<<"Limón"<<endl;
	cout<<"Manzanilla"<<endl;
	cout<<"Canela"<<endl;
	cout<<"Verde"<<endl;
	string sabor;
	getline(cin,sabor);
	sabor=mayuscular(sabor);
	
	string result;
	if(sabor=="LIMON") {
		result=azucar("te de limon");
		cout<<result<<endl;
		end();
	} else if(sabor=="MANZANILLA") {
		result=azucar("te de manzanilla");
		cout<<result<<endl;
		end();
	} else if(sabor=="CANELA") {
		result=azucar("te de canela");
		cout<<result<<endl;
		end();
	} else if(sabor=="VERDE") {
		result=azucar("te verde");
		cout<<result<<endl;
		end();
	} else {
		cout<<"Seleccione un sabor disponible"<<endl;
	}
	
}
void end(){
	cout << "¿Desea tomar algo más? (S por sí quiere tomar algo más o N si no quiere nada más)" << endl;
	char more;
	cin >> more;
	more = toupper(more);
	if (more == 'S') {
		cin.ignore();
		menu();
	} else if (more == 'N')
		cout << "Nos vemos usuario, fue un gusto atenderlo" << endl;
}
	
string mayuscular(string palabra) {
	string pal=palabra;
	for(char &c : pal) {
		c=toupper(c);
	}
	return pal;
}
char leerCaracter() {
	char c;
	c = _getch(); // Lee un solo carácter sin esperar a que se presione Enter
	return c;
}
string azucar(string tipo) {
	string type = tipo;
	char tecla;
	
	cout << "Desea con azucar o sin azucar (presione s para sin azucar o c para con azucar): " << endl;
	tecla = leerCaracter();
	
	while (tecla != 's' && tecla != 'c') {
		cout << "\nPresione una tecla valida (s o c): ";
		tecla = leerCaracter();
	}
	
	if (tecla == 's')
		type = "Se le prepara un " + type + " sin azucar";
	else if (tecla == 'c')
		type = "Se le prepara un " + type + " con azucar";
	
	return type;
}

