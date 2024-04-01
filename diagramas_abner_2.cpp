//Comprar un nuevo telefono:
	
#include <iostream>
#include <string>
	using namespace std;

int main() {
	char telefono;
	cout << "Si necesitas un nuevo telefono? s/n: ";
	cin >> telefono;
	
	if (telefono == 's') {
		char dinero;
		cout << "Te alcanza el dinero? s/n: ";
		cin >> dinero;
		
		if (dinero == 's') {
			cout << "Si te alcanza wuuu" << endl;
			
			cout << "Modelos disponibles: Samsung, iPhone, Xiaomi, Motorola, Huawei" << endl;
			cout << "Cual modelo te gustaria uwu?: ";
			string modelo;
			cin >> modelo;
			
			cout << "Nuevo o de segunda mano n/s: ";
			string estado;
			cin >> estado;
			
			if (estado == "n" or estado == "s") {
				cout << "En donde lo vas a comprar, tienda o marketplace   t/m: ";
				string lugar;
				cin >> lugar;
				
				
			}
			else {
				cout << "Elegi un metodo de, pago cuotas o al contado: ";
				string pago;
				cin >> pago;
			}
			
			cout << "Si encontraste tu modelo? s/n: ";
			char encontrado;
			cin >> encontrado;
			
			if (encontrado == 'n') {
				main(); // Para que encuentre el telefono que quiere
			}
		}
		else {
			char vender;
			cout << "Puedes vender algo para comprar el telefono? s/n";
			cin >> vender;
			
			if (vender == 's') {
				main(); // Vende algo y ver si ahora si puede comprar el telefono
			}
			else {
				cout << "No te lo puedes comprar :c, chaito" << endl;
			}
		}
	}
	else {
		cout << "No necesitas un nuevo telefono, adios owo" << endl;
	}
	
	return 0;
}
