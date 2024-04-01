#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
void sabores (string helado) {
	cout << "1. Vainilla"<<endl;
	cout << "2.Fresa"<<endl;
	cout << "3.Chocolate"<<endl;
	cout << "4.Galleta"<<endl;
	cout << "5.Chicle"<<endl;
	string sabor;
	getline (cin, sabor);
	string type = helado;
	cout << "Se le prepara un " << type << " de " << sabor;
}
 string banana (string helado){
	 string sabor;
	 cout << "Que sabor quiere?"<< endl;
	 cout << "1. Vainilla"<<endl;
	 cout << "2.Fresa"<<endl;
	 cout << "3.Chocolate"<<endl;
	 cout << "4.Galleta"<<endl;
	 cout << "5.Chicle"<<endl;
	 cin>>sabor;
	 string type = helado;
	 string textoF = helado+sabor+" ";
	 return textoF;
	 
 }
void frutas (string helado) {
	cout << "1. Coco"<<endl;
	cout << "2.Fresa"<<endl;
	cout << "3.Higo"<<endl;
	string sabor;
	getline (cin, sabor);
	string type = helado;
	cout << "Se le prepara un " << type << " de " << sabor;
}
	
int main(int argc, char *argv[]) {
	cout << "Hola usuario"<<endl;
	Sleep (1000);
	cout << "¿Qué tipo de helado quiere? (seleccione el numero de opcion)"<<endl;
		int helado;
	cout << "1. Sundae"<<endl;
	cout << "2.Banana split"<<endl;
	cout << "3.Cono"<<endl;
	cout << "4.Yougurth"<<endl;
	cout << "5.Paleta"<<endl;
	cin >> helado;
	if (helado == 1) {
		cout << "¿Que sabor de helado quiere?"<<endl;
		Sleep (1000);
		sabores ("sundae");
	}else if (helado ==2) {
		Sleep(1000);
			string textob="Los sabores de las bolas de helado son: ";
			for (int ba = 1 ; ba <=3 ; ba++) { 
				textob = banana (textob);
					
					
			}
			cout << textob;
	}if (helado ==3){
		cout <<"¿De que tamaño desea el cono? (Responda con el número de la opción)"<< endl;
		cout << "1.Grande"<< endl;
		cout << "2.Mediano"<< endl;
		cout <<"3.Pequeño"<< endl;
		int tamano;
		cin >> tamano;
		if (tamano == 1 || tamano == 2 || tamano == 3){
			cout << "Cuantas bolas de helado desea?";
			int bolashelado;
			cin>> bolashelado;
			string textob="Los sabores de las bolas de helado son: ";
			for (int ba = 1 ; ba <=bolashelado ; ba++) { 
				textob = banana (textob);
			} cout << textob;
		}
	}if (helado ==4){
		cout <<"De que tamaño lo desea?"<< endl;
		cout << "1. 12 oz"<< endl;
		cout << "2. 8 oz"<< endl;
		int onzas;
		cin >>onzas;
		frutas ("yougurth");
	}if (helado == 5){
		cout << "¿De que tipo quiere la paleta?"<< endl;
		cout << "1.Cremosa"<< endl;
		cout << "2.Hielo"<< endl;
		int paleta;
		cin >> paleta;
		cout <<"¿De que sabor quiere su paleta?"<< endl;
		sabores ("paleta");
		
	}
	return 0;
} 

