#include"stdafx.h"
#include"Rational.h"
#include<iostream>
#include<numeric>


/*
	Class Rational
	Konstruktor(long, long)
	Konstruktor(long)

*/


Rational::Rational(const long a,const long b) {
	
	if (b == 0)
	{
		std::cout << "\n Nenner darf nicht null sein \n";
		return;
	}

	Rational::z = a;
	Rational::n = b;
}


Rational::Rational(const   long a) {
	Rational::z = a;
	Rational::n = 1;
}

/*
	Setter and Getter of Rational
*/

long Rational::getZaehler() {
	return Rational::z;
}

long Rational::getNenner() {
	return Rational::n;
}

void Rational::set(long a, long b) {
	Rational::z = a;
	Rational::n = b;
}

void Rational::kehrwert() {
	long tmp = Rational::z;
	Rational::z = Rational::n;
	Rational::n = tmp;
}

/*
	easy mathematical operations
*/

void Rational::add(const Rational summand) {
	this->z = (this->z * summand.n) + (this->n * summand.z);
	Rational::n = Rational::n * summand.n;
	Rational::kuerzen();
}


void Rational::sub(const Rational a) {
	Rational::add(Rational(-a.z, a.n));
}


void Rational::mult(const Rational a) {
	Rational::z = Rational::z * a.z;
	Rational::n = Rational::n * a.n;
	Rational::kuerzen();
}

void Rational::div(const Rational divi) {
	Rational tmp = divi;
	tmp.kehrwert();
	Rational::mult(tmp);
}

void Rational::kuerzen() {
	long tmp = ggt(Rational::z, Rational::n);
	Rational::z = Rational::z / tmp;
	Rational::n = Rational::n / tmp;
}



long Rational::ggt(long x, long y) {
	long rest;
	while (y > 0) {
		rest = x % y;
		x = y;
		y = rest;
	}
	return x;
}


void eingabe(Rational& eingabe) {
	long tmpz, tmpn;
	
	std::cout << "\n Bitte Zähler eingeben und mit Enter bestaetigen ";
	std::cin >> tmpz;
	std::cout << "\n Bitte Nenner eingeben und mit Enter bestaetigen ";
	std::cin >> tmpn;

	eingabe.set(tmpz, tmpn);
}

void ausgabe(Rational& ausgabe) {
	std::cout << "\n " << ausgabe.getZaehler() << "/" << ausgabe.getNenner();
}