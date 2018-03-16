#include"stdafx.h"
#include"person.h"
#include"Rational.h"
#include<iostream>



void main() {

	/*
	Übung 3.1
	Erstellen der Ersten Klasse Person inkl. verschiedener Methoden und Attributen
	
	*/
	/*
	Person einePerson("I bims eins Test", 44, Geschlecht::m);

	std::cout << "\n" << einePerson.getName() << "\t" << einePerson.getAlter();
	std::cout << "\nistFrau: " << einePerson.istFrau() << "\tistMann: " << einePerson.istMann() << "\n";

	Person zweiPerson("Annabella Meier", 22, Geschlecht::w);

	std::cout << "\n" << zweiPerson.getName() << " ist " << zweiPerson.getAlter() << " Jahre alt.\n";
	std::cout << "istFrau: " << zweiPerson.istFrau() << "\tistMann: " << zweiPerson.istMann() << "\n";
	
	zweiPerson.setAlter(23);
	std::cout << zweiPerson.getName() << " hatte Geburtstag. Sie ist jetzt " << zweiPerson.getAlter() << " Jahre alt.\n";
	
	zweiPerson.setName("Annabella Schulz");

	std::cout << "Sie hat geheiratet. Ihr Name ist jetzt " << zweiPerson.getName() << "\n";

	einePerson.setAlter(150);
	einePerson.setName("");

	std::string test;

	std::cin >> test;

	*/


	/*
	Übung 3.2

	*/

	Rational b1(3, 5);
	Rational b2(4);
	Rational b3(3, 0);

	b1.add(b2);
	ausgabe(b1);
	eingabe(b3);

	b2.div(b3);
	//b2 = mult(b1, 5);

	ausgabe(b2);
	ausgabe(b1);
	ausgabe(b3);

	int test;
	std::cin >> test;
}