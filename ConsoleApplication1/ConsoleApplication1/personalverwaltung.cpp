#include"stdafx.h"
#include<iostream>
#include<iostream>
#include<fstream>
#include"personalverwaltung.h"
#include"person.h"









Personalverwaltung::Personalverwaltung(const std::string& dateiname) {

	std::ifstream datei(dateiname);

	if (!datei.good()) {
		std::cerr << dateiname << " ist Fehlerhaft";
		return;
	}

	std::string name;
	std::string persn;

	while (true)
	{
		std::getline(datei, name);
		
		if (name[0] == '#') {
			std::cout << "Eingabe beendet\n";
			datei.close();
			return;
		}

		std::getline(datei, persn);

		Personalverwaltung::personal.push_back(Person(name, persn, Geschlecht::m));


	}

}

void Personalverwaltung::ausgeben() {

	for (Person person : Personalverwaltung::personal) 
		std::cout << person.getName() << " " << person.getPersonalnummer() << "\n";
}

void Personalverwaltung::dialog() {

	while (true)
	{
		bool gefunden = false;
		std::string personalnummer;
		std::cout << "\n Bitte Personalnummer eingeben (x zum Abbrechen): ";
		std::getline(std::cin, personalnummer);

		if (personalnummer[0] == 'x' || personalnummer[0] == 'X')
			return;

		for (Person person : Personalverwaltung::personal) {
			if (person.getPersonalnummer() == personalnummer) {
				std::cout << person.getName() << "\n";
				gefunden = true;
				continue;
			}
		}

		if (!gefunden)
			std::cout << "nicht gefunden!\n";
		
	}


}


