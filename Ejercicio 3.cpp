#include<iostream>
#include "conio.h"
using namespace std;

int main() 
{
	//Entrada
	char aerolínea, día;
	double precio, incremento;
	int Nmaletas;
	cout << "Ingrese la Aerolinea (L:LATAM, V:Viva): " << endl;
	cin >> aerolínea;
	cout << "Dia (L:Lunes; M:Martes; MI:Miercoles; J:Jueves; V:Viernes; S:Sabado; D:Domingo): " << endl;
	cin >> día;
	cout << "Maletas: " << endl;
	cin >> Nmaletas;
	día = toupper(día);
	aerolínea = toupper(aerolínea);

	//Lógica
	precio = (aerolínea == 'L')*((día == 'L' || día == 'M' || día == 'MI' || día == 'J')*70.4 + (día == 'V' || día == 'S')*100.8 + (día == 'D')*90.1) 
		+ (aerolínea == 'V') * ((día == 'L' || día == 'M' || día == 'MI' || día == 'J')*20.4 + (día == 'V' || día == 'S')*70.6 + (día == 'D')*80.3);
	incremento = (Nmaletas == 0)*precio + (Nmaletas == 1 || Nmaletas == 2)*precio*1.15 + (Nmaletas > 2)*precio*1.30;

	//Salida
	cout << "Precio del ticket: " << incremento << endl;
	
	_getch();
}