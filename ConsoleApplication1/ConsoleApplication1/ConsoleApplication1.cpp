// Der CPP Programmierer.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
	int summe;
	int summand1;
	int summand2;

	cout << "Bitte geben Sie zwei ganze Zahlen ein \n";
	cin >> summand1 >> summand2;

	summe = summand2 + summand1;

	cout << "Die Summe der beiden eingegebenen Zahlen lautet: \n" << summe;




	return 0;
}

