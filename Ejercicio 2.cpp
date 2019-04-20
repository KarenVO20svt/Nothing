#include<iostream>
#include "conio.h"
#include<string>
using namespace std;

//Entrada
int main() 
{
	string CUC;
	string año, mes, día, región, tamaño;
	bool Lima, grande;
	cout << "Ingrese codigo unico de contribuyente: " << endl;
	cin >> CUC;

	//Lógica
	año = CUC.substr(0, 4);
	mes = CUC.substr(4, 2);
	día = CUC.substr(6, 2);
	región = CUC.substr(8, 3);
	tamaño = CUC.substr(11, 1);

	Lima = (región == "LIM");
	grande = (tamaño == "G");

	//Salida
	cout << "Dia de alta: " << día << endl;
	cout << "Mes de alta: " << mes << endl;
	cout << "Anio de alta: " << año << endl;
	cout << "Empresa de Lima (0:No; 1:Si): " << Lima << endl;
	cout << "Empresa grande (0:No; 1:Si): " << grande << endl;
	cout << "Anio operando: 0" << endl;
	
	_getch();
}