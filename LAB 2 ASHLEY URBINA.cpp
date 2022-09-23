// LAB 2 ASHLEY URBINA.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<string>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include<string>

using namespace std;

bool EsPalindroma(const string& s, size_t st, size_t en)
{
	if (s.length() == 1)
		return true;

	if (s[st] != s[en - 1])
		return false;

	if (st < en + 1)
		return EsPalindroma(s, st + 1, en - 1);

	return true;
}

void lecturaRecrusiva() {
	string linea;
	string texto;
	ifstream archivo("C:\\Users\\ashle\\OneDrive\\Desktop\\EJEMPLO.txt"); //cambie la dirección, está adjunta jeje

	//	string linea;
	while (getline (archivo, linea))
	{
		stringstream stream(linea);
		string valor;

		cout << "Contenido de la linea:\n";
		while (getline(stream, valor, ','))
		{
			cout << "valor leido: " << valor << '\n';


			EsPalindroma(valor, 0, valor.length()) ?
				cout << "s1 es palindroma" << endl :
				cout << "s1 no es palindroma" << endl;



		}
		cout << "Fin de la linea\n";


	}

}





void lecturaArchivoIterativa() {
	string linea;
	string texto;
	ifstream archivo("C:\\Users\\ashle\\OneDrive\\Desktop\\EJEMPLO.txt");

	//	string linea;
	while (getline(archivo, linea))
	{
		stringstream stream(linea);
		string valor;

		cout << "Contenido de la linea:\n";
		while (getline(stream, valor, ','))
		{
			cout << "valor leido: " << valor << '\n';

			string texto;
			int aux = 0, igual = 0;

			for (int ind = valor.length() - 1; ind >= 0; ind--) {
				if (valor[ind] == valor[aux]) {
					igual++;
				}
				aux++;
			}

			if (valor.length() == igual) {
				cout << "La palabra ingresada es palindromo!! :D" << endl;
			}
			else {
				cout << "La palabra ingresada no es palindromo!! :D" << endl;
			}
		}
		cout << "Fin de la linea\n";


	}

}




int Re1(int n, int m)
{
	if (m == 1 || m == 0) {
		return 0;
	}
	else {
		return n + Re1(n, (m - 1));
	}
}



static const string arrayValores[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };

int obtenerValor(char buscar, int x) {

	if (arrayValores[x][0] == buscar)

		return x;

	x++;
	obtenerValor(buscar, x);

}

int baseTen(int z, string entrada, int salida, int x) {

	for (int i = 0; i < entrada.length(); i++)
	{
		int t = entrada.length() - 1 - i;
		int valor = obtenerValor(entrada[i], 0);

		salida += valor + pow(z, t);
	}
	return salida;
}

void segunda(int w, int entrada, string salida) {

	if (entrada == 0)
	{
		cout << "Resultado: " << salida << endl;

	}
	else if (entrada != 0)
	{
		int buscar = entrada % w;

		salida = arrayValores[buscar][0] + salida;

		entrada = entrada / w;

		segunda(w, entrada, salida);
	}
}


void menu() {
	int opcion;
	bool repetir = true;

	do {
		system("cls");


		cout << "\n\nMenu de Opciones" << endl;
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Ejercicio 3" << endl;
		cout << "4. SALIR" << endl;

		cout << "\nIngrese una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			menuEjercicio1();



			system("pause>nul");
			break;

		case 2:
			menuEjercicio2();

			system("pause>nul");
			break;

		case 3:
			menuEjercicio3();

			system("pause>nul");
			break;


		case 4:
			repetir = false;
			break;
		}
	} while (repetir);
}


void menuEjercicio1() {
	int opcion;
	bool repetir = true;
	int x, y, z, suma;

	do {
		system("cls");


		cout << "\n\nMenu de Opciones" << endl;
		cout << "1. Recursiva" << endl;
		cout << "2. Iterativa" << endl;
		cout << "3. SALIR" << endl;

		cout << "\nIngrese una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1:

			cout << "Introduzca el primer numero: " << endl;
			cin >> x;
			cout << "Introduzca el segundo numero: " << endl;
			cin >> y;
			z = Re1(x, y);
			cout << "Resultado del producto: " << z << endl;

			system("pause>nul");
			break;

		case 2:
			cout << "INGRESE NUMERO 1" << endl;
			cin >> x;

			cout << "INGRESE LA CANTIDAD DE VECES A MULTIPLICAR" << endl;
			cin >> y;

			for (int i = 0; i <= y; i++) {
				z = x * i;

			}
			cout << "EL PRODUCTO ES: " << endl;
			cout << z << endl;

			system("pause>nul");
			break;

		case 3:
			repetir = false;
			break;
		}
	} while (repetir);
}


void menuEjercicio2() {
	int opcion;
	bool repetir = true;
	int x, y, z, suma;

	do {
		system("cls");


		cout << "\n\nMenu de Opciones" << endl;
		cout << "1. Recursiva" << endl;
		cout << "2. Iterativa" << endl;
		cout << "3. SALIR" << endl;

		cout << "\nIngrese una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1:
			lecturaRecrusiva();



			system("pause>nul");
			break;

		case 2:

			lecturaArchivoIterativa();

			system("pause>nul");
			break;

		case 3:
			repetir = false;
			break;
		}
	} while (repetir);
}

void menuEjercicio3() {
	int opcion;
	bool repetir = true;
	int x, y, z, suma;
	string xd;
	char hola;

	do {
		system("cls");


		cout << "\n\nMenu de Opciones" << endl;
		cout << "1. Recursiva" << endl;
		cout << "2. Iterativa" << endl;
		cout << "3. SALIR" << endl;

		cout << "\nIngrese una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1:

			cout << "Introduzca un dato tipo char: " << endl;
			cin >> hola;
			cout << "Introduzca el segundo numero: " << endl;
			cin >> y;

			suma = obtenerValor(hola, y);
			cout << "Resultado: " << suma << endl;


			system("pause>nul");
			break;

		case 2:

			cout << "Introduzca el primer valor: " << endl;
			cin >> x;
			cout << "Introduzca el segundo valor " << endl;
			cin >> z;
			cout << "Introduzca la salida  " << endl;
			cin >> xd;

			segunda(x, z, xd);




			system("pause>nul");
			break;

		case 3:
			repetir = false;
			break;
		}
	} while (repetir);
}



int main() {


	menu();


	return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
