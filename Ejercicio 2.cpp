#include<iostream>
#include "conio.h"
#include<string>
using namespace std;

//Entrada
int main() 
{
	string CUC;
	string a�o, mes, d�a, regi�n, tama�o;
	bool Lima, grande;
	cout << "Ingrese codigo unico de contribuyente: " << endl;
	cin >> CUC;

	//L�gica
	a�o = CUC.substr(0, 4);
	mes = CUC.substr(4, 2);
	d�a = CUC.substr(6, 2);
	regi�n = CUC.substr(8, 3);
	tama�o = CUC.substr(11, 1);

	Lima = (regi�n == "LIM");
	grande = (tama�o == "G");

	//Salida
	cout << "Dia de alta: " << d�a << endl;
	cout << "Mes de alta: " << mes << endl;
	cout << "Anio de alta: " << a�o << endl;
	cout << "Empresa de Lima (0:No; 1:Si): " << Lima << endl;
	cout << "Empresa grande (0:No; 1:Si): " << grande << endl;
	cout << "Anio operando: 0" << endl;
	
	_getch();
}