// ConsoleApplication1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
	


    return 0;
}


int uebung1() {
	int summe;
	int summand1;
	int summand2;

	cout << "Bitte zwei ganze Zahlen eingeben\n";
	cin >> summand1 >> summand2;

	summe = summand1 + summand2;

	cout << "Die Summe der beiden Zahlen ergibt: " << summe;


	return 0;
}