//un progrma que solo aparezcan los numeros del 6 al 20

#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <ctype.h>

void frac(int);
void dec(int);

using namespace std;

int main() {

	int a;
	char resp;
	char opc;

	cout << "Dame un numero entre el 6 y el 21: ";
	cin >> a;

	if ((a <= 5) || (a >= 21)) {
		cout << "tu numero es incorrecto ";

	}
	else {
		do
		{
			cout << "************Menu************\n";
			cout << " A)Fracciones \n B)Decimales\n C)Salir\n Escoge una letra [A-C]: ";
			cin >> resp;

			switch (toupper(resp))
			{
			case 'A':
				frac(a);
				break;
			case 'B':
				dec(a);
				break;
			default:
				break;
			}
		} while (resp =! 'C');
	}system("PAUSE");
	return 0; 
}

void frac(int a) {
	
	float f,sum = 0.0;
	for (f = 1;f <= a;f++) {
		cout << " 1/" << f << " + ";
		sum = sum + (1.0/f);	
	}
	cout << " El resultado es " << sum << endl;
}
void dec(int a) {

	float f, sum = 0.0, aux;
	for (f = 1.0;f <= a;f++) {
		cout << (1 / f) << " + ";
		sum = sum + (1.0 / f);
	}
	cout << " El resultado es " << sum << endl;
}
