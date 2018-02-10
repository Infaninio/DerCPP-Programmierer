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

int main()
{
	int waiter;
	uebung4();

	cin >> waiter;
    return 0;
}


