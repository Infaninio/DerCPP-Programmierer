// Kapitel5.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include "stdafx.h"
#include"MeinString.h"
#include "format.h"
#include "teilnehmer.h"
#include<iostream>
#include<string>



int main()
{

	std::cout << "\n***************************************************\n";
	std::cout << "                    Aufgabe 5.1                    \n";
	std::cout << "***************************************************\n";
	MeinString test1;
	test1.assign("I bims ein Test !\n");
	anzeigen(std::cout, test1);
	test1.assign("dada\n");
	anzeigen(std::cout, test1);
	test1.assign("dfaksöfjdsklfjsdaölkfjsdklöfjdskölaf   fdsajfödslf jsdaf dsf dsaföjdsaf\n");
	anzeigen(std::cout, test1);
	
	MeinString test2("noch ein Test\n");
	anzeigen(std::cout, test2);

	test2.swap(test1);

	test1.insert(0, "lul");
	anzeigen(std::cout, test1);
	anzeigen(std::cout, test2);
	



	//Aufgabe 5.2
	std::cout << "\n***************************************************\n";
	std::cout << "                    Aufgabe 5.2                    \n";
	std::cout << "***************************************************\n";
	Format f(12, 3);
	std::cout << f.toString(789.906625) + '\n';
	std::cout << f.toString(-123456789.906625) +'\n';




	//Aufgabe 5.3
	std::cout << "\n***************************************************\n";
	std::cout << "                    Aufgabe 5.3                    \n";
	std::cout << "***************************************************\n";

	Teilnehmer otto("Otto");
	Teilnehmer andrea("Andrea");
	Teilnehmer jens("Jens");
	Teilnehmer silvana("Silvana");
	Teilnehmer miriam("Miriam");
	Teilnehmer paul("Paul");

	std::vector<Teilnehmer*> alle{ &otto, &andrea, &jens, &silvana, &miriam, &paul };
	andrea.lerntKennen(jens);
	silvana.lerntKennen(otto);
	paul.lerntKennen(otto);
	paul.lerntKennen(silvana);
	miriam.lerntKennen(andrea);
	jens.lerntKennen(miriam);
	jens.lerntKennen(silvana);

	if (jens.kennt(andrea))
		std::cout << "Jens kennt andrea";

	for (auto teilnehmerptr : alle) {
		std::cout <<'\n' <<  teilnehmerptr->gibNamen() << " kennt: ";
		teilnehmerptr->druckeBekannte();
	}


	Teilnehmer dirac("Dirac");
	{
		Teilnehmer pauli("Pauli");
		pauli.lerntKennen(dirac);
	}

	std::cout << "\n Dirac kennt: ";
	dirac.druckeBekannte();






	int i;
	std::cin >> i;

}

