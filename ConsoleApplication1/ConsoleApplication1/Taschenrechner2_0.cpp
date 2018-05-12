#include"stdafx.h"
#include<iostream>
#include"Taschenrechner2_0.h"



Taschenrechner::Taschenrechner(std::string term) {
	Taschenrechner::term = term + "e";
	Taschenrechner::pos = 1;
	std::cout << "\n Lösung: " << Taschenrechner::ausdruck(Taschenrechner::term[0]);
}

void Taschenrechner::newString(std::string term) {
	Taschenrechner::term = term + "e";
	Taschenrechner::pos = 1;
	std::cout << "\n Lösung: " << Taschenrechner::ausdruck(Taschenrechner::term[0]);
}

long Taschenrechner::ausdruck(char& c) {
	long a = 5;
	if (c == '-') {
		Taschenrechner::get(c);
		a = -summand(c);
	}
	else {
		if (c == '+') {
			Taschenrechner::get(c);
		}
		a = summand(c);
	}
	while (c == '+' || c == '-')
	{
		if (c == '+') {
			Taschenrechner::get(c);
			a += summand(c);
		}
		else {
			Taschenrechner::get(c);
			a -= summand(c);
		}
	}

	return a;
}


long Taschenrechner::zahl(char& c) {
	long z = 0;

	while (isdigit(c))
	{
		z = 10 * z + long(c - '0');
		Taschenrechner::get(c);
	}
	return z;
}


long Taschenrechner::faktor(char& c) {
	long f;
	if (c == '(') {
		Taschenrechner::get(c);
		f = ausdruck(c);
		if (c != ')') {
			std::cout << "Rechte Klammer fehlt!\n";
		}
		else
		{
			Taschenrechner::get(c);
		}
	}
	else
	{
		f = zahl(c);
	}

	return f;
}


long Taschenrechner::summand(char& c) {
	long s = faktor(c);
	while (c == '*' || c == '/')
		if (c == '*') {
			Taschenrechner::get(c);
			s *= faktor(c);
		}
		else
		{
			Taschenrechner::get(c);
			s /= faktor(c);
		}

	return s;
}



void Taschenrechner::get(char& c) {
	c = Taschenrechner::term[Taschenrechner::pos];
	Taschenrechner::pos++;
}