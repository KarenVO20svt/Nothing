#include <iostream>
#include "conio.h"
using namespace std;

//Definir funci�n
double precioTerreno(double tama�oT, double precio, double tipoC)
{
	double Ptotal;
	Ptotal = tama�oT * precio * tipoC ;
	return Ptotal;
}

int main()
{
	double tama�oT, precio, tipoC, PTotal;
	cout << "Ingrese el tama�o del terreno en metros cuadrados: " << endl;
	cin >> tama�oT;
	cout << "Ingrese el precio por metro cuadrado en dolares: " << endl;
	cin >> precio;
	cout << "Ingrese el tipo de cambio del dia: " << endl;
	cin >> tipoC;
	PTotal = precioTerreno(tama�oT, precio, tipoC);
	cout << "El precio total de venta en soles del terreno es: " << PTotal << endl;
	
	_getch();
}