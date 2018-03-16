#include"stdafx.h"
#include"person.h"
#include<iostream>


Person::Person() {
	Person::Alter = 0;
	Person::Name = "kein Name eingetragen";
}


Person::Person(const std::string& Name, const unsigned int& Alter, const enum class Geschlecht Geschlecht) {
	Person::Name = Name;
	Person::Alter = Alter;
	Person::Geschlecht = Geschlecht;
}




unsigned int Person::getAlter() {
	return Person::Alter;
}

std::string Person::getName() {
	return Person::Name;
}

void Person::setAlter(const unsigned int neuesAlter) {
	
	if (neuesAlter <= 120)
		Person::Alter = neuesAlter;
	else
		std::cout << "\nPersonen können derzeit max 120 Jahre alt werden";

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
