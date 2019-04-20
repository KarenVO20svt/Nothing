#include <iostream>
#include "conio.h"
using namespace std;

//Definir función
double precioTerreno(double tamañoT, double precio, double tipoC)
{
	double Ptotal;
	Ptotal = tamañoT * precio * tipoC ;
	return Ptotal;
}

int main()
{
	double tamañoT, precio, tipoC, PTotal;
	cout << "Ingrese el tamaño del terreno en metros cuadrados: " << endl;
	cin >> tamañoT;
	cout << "Ingrese el precio por metro cuadrado en dolares: " << endl;
	cin >> precio;
	cout << "Ingrese el tipo de cambio del dia: " << endl;
	cin >> tipoC;
	PTotal = precioTerreno(tamañoT, precio, tipoC);
	cout << "El precio total de venta en soles del terreno es: " << PTotal << endl;
	
	_getch();
}