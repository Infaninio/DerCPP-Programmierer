// ConsoleApplication1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include<iostream>
#include<limits>
using namespace std;


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


int uebung2() {
	cout << "Grenzwerte für Ganzzahl Typen: \n";
	cout << "int Minimum:                     " << numeric_limits<int>::min() << "\n";
	cout << "int Maximum:                     " << numeric_limits<int>::max() << "\n";
	cout << "long Minimum:                    " << numeric_limits<long>::min() << "\n";
	cout << "long Maximum:                    " << numeric_limits<long>::max() << "\n";
	cout << "long long Minimum:               " << numeric_limits<long long>::min() << "\n";
	cout << "long long Maximum:               " << numeric_limits<long long>::max() << "\n";

	cout << "unsigned int:                    " << numeric_limits<unsigned int>::max() << "\n";
	cout << "unsigned long:                   " << numeric_limits<unsigned long>::max() << "\n";
	cout << "unsigned long long:              " << numeric_limits<unsigned long long>::max() << "\n";


	cout << "Anzahl der verwendeten Bits pro Datentyp\n";


	cout << "int        " << sizeof(int) * 8 << "\n";
	cout << "long       " << sizeof(long) * 8 << "\n";
	cout << "long long  " << sizeof(long long) * 8 << "\n";


	return 0;

}

void uebung3() {
	int a{ 5 };
	int b{ 7 };
	int c;
	int d;
	double f = -0.3567364;

	c = ++a;
	d = b++;

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << d << "\n";
	cout << abs(f);

}

void uebung4() {
	while (true) {
		float x;
		cout << "x eingeben: ";
		cin >> x;
		cout << "\n";
		cout << "x            =" << x << "\n";
		cout << "fabs(x)      =" << fabs(x) << "\n\a";
		cout << "sqrt(x)      =" << sqrt(x) << "\n";
		cout << "sin(x)       =" << sin(x) << "\n";
		cout << "exp(x)       =" << exp(x) << "\n";
		cout << "log(x)       =" << log(x) << "\n";
	}
	{

	}
}


void test12() {

	unsigned int umax = ~0;

	cout << "unsigned int max: " << umax << "\n";

	int maxint = umax / 2 + 1;

	cout << "sigend int max: " << maxint << "\n";

	int a = 5;
	int b = 3;

	(cout << b) << a;

}

void uebung5() {

	char character;

	cin >> character;

	if (character >= 'A' && character <= 'Z')
		cout << "\n" << character << " ist ein Großbuchstabe \n";
	else
		cout << "\n" << character << " ist ein Kleinbuchstabe\n";

}


void test13() {

	cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
	cout << "---------------------------------------------------Aufgabe 1.3---------------------------------------------------------\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------\n";

	int numstart;
	int numend;
	int num3;

	cout << "Bitte geben Sie nacheinander drei ganze Zahlen ein, jede Zahl muss mit Enter bestätigt werden: \n 1. Zahl (Bereich Anfang): ";
	cin >> numstart;
	cout << "\n 2. Zahl (Bereich Ende): ";
	cin >> numend;
	cout << "\n 3. Zahl (Wert zwischen Anfang und Ende?)";
	cin >> num3;

	if (numstart > numend) {
		cout << "\n Der Anfangswert ist größer als der Endwert, mathematischer Fehler";
		return;
	}
	
	
	if (num3 <= numend && num3 >= numstart) {
		cout << "\nZahl 3 liegt in den vorgegebene Grenzen";
		return;
	}

	cout << "\nZahl 3 liegt nicht innerhalb der vorgegebenen Grenzen";

	
}


void test14() {
	cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
	cout << "---------------------------------------------------Aufgabe 1.4---------------------------------------------------------\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------\n";


	int numstart;
	int numend;
	int num3;

	cout << "Bitte geben Sie nacheinander drei ganze Zahlen ein, jede Zahl muss mit Enter bestätigt werden: \n 1. Zahl (Bereich Anfang): ";
	cin >> numstart;
	cout << "\n 2. Zahl (Bereich Ende): ";
	cin >> numend;
	cout << "\n 3. Zahl (Wert zwischen Anfang und Ende?)";
	cin >> num3;




	if (numstart > numend && numstart > num3) {
		cout << "\nZahl 1: " << numstart << "ist die größte der drei Zahlen";
		return;
	}

	if (numend > num3) {
		cout << "\nZahl 2: " << numend << " ist die größte der drei Zahlen";
		return;
	}

	cout << "\nZahl 3: " << num3 << " ist die größte der drei Zahlen";



}

void uebung6() {

	char number;
	int ziffer = 0;
	cout << "\nBitte geben Sie eine roemische Zahl ein. Wir werden pruefen ob es wirklich roemische Ziffern sind.: ";
	cin >> number;
	
	switch (number)
	{
	case 'i':
		[[__fallthrough]];
	case 'I':
		ziffer = 1;
		break;
	
	
	case 'v':
		[[__fallthrough]];
	case 'V':
		ziffer = 5;
		break;


	case 'x':
		[[__fallthrough]];
	case 'X':
		ziffer = 10;
		break;


	case 'l':
		[[__fallthrough]];
	case 'L':
		ziffer = 50;
		break;


	case 'c':
		[[__fallthrough]];
	case 'C':
		ziffer = 100;
		break;


	case 'd':
		[[__fallthrough]];
	case 'D':
		ziffer = 500;
		break;


	case 'm':
		[[__fallthrough]];
	case 'M':
		ziffer = 1000;
		break;


	default:
		ziffer = 0;
		break;
	}

	if (ziffer != 0)
		cout << "Der Buchstabe " << number << " ist eine roemische Ziffer mit dem Wert: " << ziffer << "\n";
	else
		cout << "Der Buchstabe " << number << " ist keine roemische Ziffer." << "\n";
}




int main()
{
	while(1){
		uebung6();
		
	}
	return 0;
}


