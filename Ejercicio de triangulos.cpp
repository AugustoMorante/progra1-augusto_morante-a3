// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
/*
	TEST
	L1 = 2  L1 = 4
	L2 = 2  L2 = 4
	L3 = 2  L3 = 5
*/


int main()
{
	//Entrada
	int l1, l2, l3;
	bool triEq, triIs, triEsc;
	cout << "Lado 1\n";
	cin >> l1;
	cout << "Lado 2\n";
	cin >> l2;
	cout << "Lado 3\n";
	cin >> l3;
	cout << endl;
	//Logica
	triEq = (l1 == l2 && l1 == l3);
	triIs = (l1 == l2 && l2 != l3) || (l2 == l3 && l2 != l1);
	triEsc = (l1 != l2 && l1 != l3 && l2 != l3);
	//Salida
	cout << "Tipo de triangulo\n" << "Verdadero -> 1\n" << "Falso -> 0\n" << endl;
	cout << "Equilatero ";
	cout << triEq << endl;
	cout << "Isoceles ";
	cout << triIs << endl;
	cout << "Escaleno ";
	cout << triEsc << endl;
	system("pause");
    return 0;
}

