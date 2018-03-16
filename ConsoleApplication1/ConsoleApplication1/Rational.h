#pragma once


#ifndef Rational_h
#define Rational_h


class Rational
{
public:
	Rational(const long);
	Rational(const long, const long);

	void add(Rational);
	void sub(Rational);
	void mult(Rational);
	void div(Rational);

	long getZaehler();
	long getNenner();
	void set(long, long);
	void kehrwert();
	//~Rational();

private:
	long z;
	long n;
	void kuerzen();
	long ggt(long x, long y);
};


Rational add(Rational, Rational);
Rational sub(Rational, Rational);
Rational mult(Rational, Rational);
Rational div(Rational, Rational);

void eingabe(Rational&);
void ausgabe(Rational&);


#endif // !Rational_h

