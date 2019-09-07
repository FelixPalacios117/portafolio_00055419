#include <iostream>
#include <string>
using namespace std;
struct numerocomplejo {
	string partereal;
	string parteimaginaria;
};
void capturarnumeronuevo(string numero) {
	numerocomplejo nuevo;
	for (int i = 0; i < numero.length(); i++) {
		if (numero[i] == '+' || numero[i] == '-') {
			if (numero[i] == '-') {
				numero[i] = '+';
			}
			else {
				numero[i] = '-'; 
			}
			for (int j = i; j < numero.length(); j++) { 
				nuevo.parteimaginaria += numero[j];
			}
			for (int k = 0; k < i; k++) {
				nuevo.partereal += numero[k];
			}
			i = numero.length();
		}
	}
	cout << "El numero conjugado es : "<<nuevo.partereal<<nuevo.parteimaginaria; 
}
int main()
{   
	string numero;
	cout << "Ingrese el numero complejo : ";
	cin >> numero;
	capturarnumeronuevo(numero);
	return 0;
}
