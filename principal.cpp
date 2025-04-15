/******************************************************************************

                                calculadora 2.0
               realizar una calculadora con las especificaciones dadas
                     by.   Juan JosC) Cantor Castellanos

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
	string operacion; // creamos una variante en bucle strig para texto o numeros llamada "operacion"
	bool continuar = true; // manera corta de controlar el bucle "while"

	cout << "Bienvenido a la calculadora simple.\n"; //saludo

	while (continuar) { //anuncio de operaciones, se le da a elegir entre las operaciones a realizar
		cout << "\nOperaciones disponibles:\n";
		cout << "  suma (+ o 1)\n";
		cout << "  resta (- o 2)\n";
		cout << "  multiplicacion (* o 3)\n";
		cout << "  division (/ o 4)\n";
		cout << "  potenciacion (^ o 5)\n"; // "/n = saltos de linea, es decir, "se pasa al siguiente renglC3n"
		cout << "  division_entera (div o 6)\n";
		cout << "  modulo (%) o 7 \n";

		cout << "\nIngrese la operacion a realizar, el signo o 'salir' para terminar: ";
		cin >> operacion;

		if (operacion == "salir") { //se da la opcion de salir en caso de escribir salir con la variante "operacion"
			break;
		}

		float op1 = 0, op2 = 0; //declaracion de 2 variantes tipo flotantes
		string entrada; //creamos una variante "strig" llamada entrada para texto o numeros

		cout << "Ingrese el primer operando (o 'cancelar' para cancelar): ";
		cin >> entrada; // se solicita el primer valor a trabajar o la opcion de "cancelar" para terminar el bucle

		if (entrada == "cancelar") continue;

		bool valido = true; //se crea una variable booleana, valido es "verdadero" hasta que se demustre lo contrario
		for (int i = 0; i < entrada.length(); i++) {
			if ((entrada[i] < '0' || entrada[i] > '9') && entrada[i] != '.' && entrada[i] != '-') {
				// se restringen nC:meros que no sean negativos, decimales o diiferentes de los digitos "0" y "9"
				valido = false;
				// "valido" dejC3 de ser "verdadero"
				break;
			}
		}

		if (!valido) {
			cout << "Entrada invalida.\n";
			continue; // si "valido", no es "verdadero" se entrega "entrega invalida."
		}

		op1 = atof(entrada.c_str());
		//los futuros digitos obtenidos los puede guardar como decimales

		cout << "Ingrese el segundo operando (o 'cancelar' para cancelar): ";
		cin >> entrada;
		if (entrada == "cancelar") continue;

		valido = true;
		for (int i = 0; i < entrada.length(); i++) {
			if ((entrada[i] < '0' || entrada[i] > '9') && entrada[i] != '.' && entrada[i] != '-') {
				valido = false;
				break;
			}
		}

		if (!valido) {
			cout << "Entrada invalida.\n";
			continue;
		}

		op2 = atof(entrada.c_str());

		if (operacion == "+" || operacion == "suma" || operacion == "1") {
			cout << "Resultado: " << (op1 + op2) << "\n";
		} else if (operacion == "-" || operacion == "resta" || operacion == "2") {
			cout << "Resultado: " << (op1 - op2) << "\n";
		} else if (operacion == "*" || operacion == "multiplicacion" || operacion == "3") {
			cout << "Resultado: " << (op1 * op2) << "\n";
		} else if (operacion == "/" || operacion == "division" || operacion == "4") {
			if (op2 == 0) {
				cout << "Error: division por cero.\n";
			} else {
				cout << "Resultado: " << (op1 / op2) << "\n";
			}
		} else if (operacion == "^" || operacion == "potenciacion" || operacion == "5") {
			float resultado = 1;
			int entero = static_cast<int>(op2);
			if (entero < 0) {
				cout << "Error: la potenciacion solo admite exponentes enteros no negativos en esta version.\n";
				continue;
			}
			for (int i = 0; i < entero; i++) {
				resultado *= op1;
			}
			cout << "Resultado: " << resultado << "\n";
		} else if (operacion == "div" || operacion == "division_entera" || operacion == "6") {
			int a = static_cast<int>(op1);
			int b = static_cast<int>(op2);
			if (b == 0) {
				cout << "Error: division entera por cero.\n";
			} else {
				cout << "Resultado: " << (a / b) << "\n";
			}
		} else if (operacion == "%" || operacion == "modulo" || operacion == "7") {
			int a = static_cast<int>(op1);
			int b = static_cast<int>(op2);
			if (b == 0) {
				cout << "Error: modulo por cero.\n";
			} else {
				cout << "Resultado: " << (a % b) << "\n";
			}
		} else {
			cout << "Operacion no reconocida.\n";
		}

		string respuesta;
		cout << "\nB?Desea hacer otra operacion? (si/no): ";
		cin >> respuesta;
		if (respuesta != "si" && respuesta != "SI" && respuesta != "Si") {
			continuar = false;
		}
	}

	cout << "Gracias por usar la calculadora.\n";
	return 0;
}