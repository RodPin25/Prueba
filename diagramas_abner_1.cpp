//Diagramas Abner
	//Comprar tenis:
	
#include <iostream>
	using namespace std;

int main() {
	char tenis;
	cout << "Tienes suficiente dinero para comprar tenis? s/n: ";
	cin >> tenis;
	
	if (tenis == 's') {
		cout << "Si le alcanza para comprar tenis" << endl;
		
		cout << "Tipos de calzado disponibles: " << endl;
		cout << "1. Deportivo" << endl;
		cout << "2. Casual" << endl;
		cout << "3. Formal" << endl;
		cout << "4. Hogareño" << endl;
		cout << "5. De trabajo" << endl;
		cout << "Elige el tipo de calzado (1, 2, 3, 4 ,5): ";
		
		char tipotenis;
		cin >> tipotenis;
		
		if (tipotenis == '1' || tipotenis == '2' || tipotenis == '3' || tipotenis == '4' || tipotenis == '5') {
			cout << "Te gusta ese tipo de tenis? s/n: ";
			char gusto;
			cin >> gusto;
			
			if (gusto == 's') {
				cout << "Hay de su talla? s/n: ";
				char talla;
				cin >> talla;
				
				if (talla == 's') {
					cout << "Disfruta tus nuevos tenis uwu" << endl;
					
					cout << "Quieres otro par de tenis? s/n: ";
					char otropar;
					cin >> otropar;
					
					if (otropar == 's') {
						main(); // Que se vuelva a repetir todo si quiere comprar otro par
					}
					else {
						cout << "Gracias por su compra owo" << endl;
					}
				}
				else {
					cout << "No hay de su talla" << endl;
				}
			}
			else {
				cout << "Seguir buscando" << endl;
			}
		}
	}
	else {
		cout << "Usted es pobre y no tiene para los tenis :c" << endl;
	}
	
	return 0;
}






