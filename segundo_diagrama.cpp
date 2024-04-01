#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <array>
#include <conio.h>
using namespace std;

//Protipos de funciones
void menu();
void italiana();
void tipica();
string opciones(string comida);
string mayuscular(string palabra);
char leerCaracter();
void lugar();
//Prototipos de funciones

int main(int argc, char *argv[]) {
	menu();
	return 0;
}
void menu() {
	system("cls");
	cout<<"Hola usuario"<<endl;
	Sleep(1000);
	cout<<"Que quiere comer?"<<endl;
	cout<<"Comida italiana"<<endl;
	cout<<"Comida tipica"<<endl;
	string comida;
	getline(cin,comida);
	comida=mayuscular(comida);
	
	if(comida=="italiana")
		italiana();
	else if(comida=="tipica" || comida=="comida tipica")
		tipica();
	else {
		cout<<"Seleccione un tipo de comida valido"<<endl;
		menu();
	}
	
}
void italiana() {
	cout<<"Que tipo de comida italiana quiere"<<endl;
	Sleep(1000);
	cout<<"Spaguetti"<<endl;
	cout<<"Lasagna"<<endl;
	cout<<"Pizza"<<endl;
	
	string eleccion;
	getline(cin,eleccion);
	eleccion=mayuscular(eleccion);
	
	string electo;
	if(eleccion=="spaguetti") {
		electo=opciones("spaguetti");
		lugar();
		cout<<"\n"<<electo<<endl;
	} else if(eleccion=="lasagna") {
		electo=opciones("lasagna");
		lugar();
		cout<<"\n"<<electo<<endl;
	} else if(eleccion=="pizza") {
		electo=opciones("pizza");
		lugar();
		cout<<"\n"<<electo<<endl;
	} else {
		cout<<"elija un tipo de comida italiana valido"<<endl;
		italiana();
	}
	
}

void tipica() {
	cout<<"Que tipo de comida tipica quiere"<<endl;
	Sleep(1000);
	cout<<"Paches"<<endl;
	cout<<"Pepian"<<endl;
	cout<<"Chuchitos"<<endl;
	cout<<"Rellenitos"<<endl;
	
	string eleccion;
	getline(cin,eleccion);
	eleccion=mayuscular(eleccion);
	
	string electo;
	if(eleccion=="paches") {
		electo=opciones("paches");
		lugar();
		cout<<"\n"<<electo<<endl;
	} else if(eleccion=="pepian") {
		cout<<"La opcion elegida es pepian"<<endl;
		lugar();
	} else if(eleccion=="chuchitos") {
		electo=opciones("chuchitos");
		lugar();
		cout<<"\n"<<electo<<endl;
	} else if(eleccion=="rellenitos") {
		cout<<"La opcion elegida es rellenitos"<<endl;
		lugar();
	} else {
		cout<<"haga una eleccion valida"<<endl;
		
	}
}
string opciones(string comida) {
	array<string, 3> spaguetti = {"Bavotte", "Bucatini", "Fetuccini"};
	array<string, 4> lasagna = {"Bolonesa", "Alla ferrarese", "Al radicchio", "Napoletana"};
	array<string, 3> pizza = {"Peperoni", "Queso", "Jamon"};
	array<string, 2> pache = {"Papa", "Arroz"};
	array<string, 2> chuchito = {"Cerdo", "Pollo"};
	
	cout << "Seleccione la variante de la comida que eligio" << endl;
	string food = comida;
	string eleccionFinal;
	
	// Convertir la comida a mayúsculas
	// Suponiendo que tienes una función llamada mayuscular
	//food = mayuscular(food);
	
	if (food == "spaguetti") {
		for (string& num : spaguetti) {
			cout << num << endl;
		}
	} else if (food == "lasagna") {
		for (string& num : lasagna) {
			cout << num << endl;
		}
	} else if (food == "pizza") {
		for (string& num : pizza) {
			cout << num << endl;
		}
	} else if (food == "paches") {
		for (string& num : pache) {
			cout << num << endl;
		}
	} else if (food == "chuchito") {
		for (string& num : chuchito) {
			cout << num << endl;
		}
	}
	
	// Obtener la elección del usuario
	cout << "Ingrese su eleccion: ";
	getline(cin, eleccionFinal);
	
	string retornable = "Su eleccion es: " + food + " en su variable de " + eleccionFinal;
	return retornable;
}
void lugar() {
	cout<<"Donde voy a comer? En la calle o en un restaurante"<<endl;
	string place;
	getline(cin,place);
	place=mayuscular(place);
	
	if(place=="calle") {
		cout<<"Tengo que salir a buscar el lugar";
	} else if(place=="restaurante"){
		cout<<"Ya que se restaurante quiero? Presione S para decir que si o N para decir que no"<<endl;
		char tecla;
		tecla=leerCaracter();
		while (tecla != 's' && tecla != 'n') {
			cout << "\nPresione una tecla valida (s o n): ";
			tecla = leerCaracter();
		}
		
		if (tecla == 's') {
			cout<<"Escriba el nombre del restaurante"<<endl;
			string restaurant;
			getline(cin,restaurant);
			
			cout<<"Tiene que dirigirse al restaurante "<<restaurant<<endl;
		}
		else if (tecla == 'n') {
			cout<<"Tiene que elegir el restaunte"<<endl;
			lugar();
		}
	}
}
string mayuscular(string palabra) {
	string pal=palabra;
	for(char &c : pal) {
		c=tolower(c);
	}
	return pal;
}
char leerCaracter() {
	char c;
	c = _getch(); // Lee un solo carácter sin esperar a que se presione Enter
	return c;
}

