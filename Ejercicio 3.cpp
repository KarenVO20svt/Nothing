#include<iostream>
#include "conio.h"
using namespace std;

int main() 
{
	//Entrada
	char aerol�nea, d�a;
	double precio, incremento;
	int Nmaletas;
	cout << "Ingrese la Aerolinea (L:LATAM, V:Viva): " << endl;
	cin >> aerol�nea;
	cout << "Dia (L:Lunes; M:Martes; MI:Miercoles; J:Jueves; V:Viernes; S:Sabado; D:Domingo): " << endl;
	cin >> d�a;
	cout << "Maletas: " << endl;
	cin >> Nmaletas;
	d�a = toupper(d�a);
	aerol�nea = toupper(aerol�nea);

	//L�gica
	precio = (aerol�nea == 'L')*((d�a == 'L' || d�a == 'M' || d�a == 'MI' || d�a == 'J')*70.4 + (d�a == 'V' || d�a == 'S')*100.8 + (d�a == 'D')*90.1) 
		+ (aerol�nea == 'V') * ((d�a == 'L' || d�a == 'M' || d�a == 'MI' || d�a == 'J')*20.4 + (d�a == 'V' || d�a == 'S')*70.6 + (d�a == 'D')*80.3);
	incremento = (Nmaletas == 0)*precio + (Nmaletas == 1 || Nmaletas == 2)*precio*1.15 + (Nmaletas > 2)*precio*1.30;

	//Salida
	cout << "Precio del ticket: " << incremento << endl;
	
	_getch();
}