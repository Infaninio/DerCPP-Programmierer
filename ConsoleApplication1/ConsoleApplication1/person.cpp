#include"stdafx.h"
#include"person.h"
#include<iostream>


Person::Person() {
	Person::Personalnummer = "0";
	Person::Name = "kein Name eingetragen";
}


Person::Person(const std::string& Name, const std::string& Personalnummer, const enum class Geschlecht Geschlecht) {
	Person::Name = Name;
	Person::Personalnummer = Personalnummer;
	Person::Geschlecht = Geschlecht;
}




std::string Person::getPersonalnummer() {
	return Person::Personalnummer;
}

std::string Person::getName() {
	return Person::Name;
}



void Person::setName(const std::string& neuerName) {
	if (!neuerName.empty())
		Person::Name = neuerName;
	else
		std::cout << "\nName kann nicht leer sein";
}

bool Person::istFrau() {
	if (Person::Geschlecht == Geschlecht::w)
		return true;
	else
		return false;
}

bool Person::istMann() {
	if (Person::Geschlecht == Geschlecht::m)
		return true;
	else
		return false;
}
