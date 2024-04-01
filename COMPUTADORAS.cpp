#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Tiene dinero? responda con S o N"<< endl;
	char letra;
	cin >> letra;
	letra = toupper(letra);
		if (letra == 'S') {
			cout << "¿Qué computadora necesito? (Responda con el numero de la opcIon)"<< endl;
			cout << "1. Escritorio"<< endl;
			cout << "2.Laptop"<<endl;
			int compu;
			cin >> compu;
			if (compu == 1 || compu == 2) {
				cout << "¿Para que quiero la computadora?"<<endl;
			}cout << "1. Jugar"<<endl;
			cout << "2. Estudio"<< endl;
			cout << "3. Trabajo"<< endl;
			int uso;
			cin >> uso;
			if (uso == 1 || uso == 2 || uso == 3){
				cout << "Tiene que ver opciones"<<endl;
				cout << "Consiguo computadora? (Responda con S o N)"<< endl;
				char tener;
				cin >> tener;
				tener = toupper(tener) ;
				if (tener == 'S') {
					cout << " Ir a comprar la computadora";
				}else if (tener == 'N'){
						cout << "Volver a ver opciones"<<endl;
						char tener;
						cout << "Consiguo computadora? (Responda con S o N)"<< endl;
						cin >> tener;
						tener = toupper(tener) ;
						if (tener == 'S') {
							cout << " Ir a comprar la computadora";
						}else {
								cout << "Volver a ver opciones";
					}
				}
			}
			else {
				cout << "No se sabe el uso de la computadora";
			}
		}else {
				cout << "No es posible comprarse una computadora";
			
		}
	
	return 0;
}

