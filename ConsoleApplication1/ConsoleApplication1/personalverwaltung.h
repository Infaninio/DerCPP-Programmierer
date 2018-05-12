#pragma once


#ifndef personalverwaltung_h
#define personalverwaltung_h
#include<string>
#include<vector>
#include"person.h"

class Personalverwaltung {

public:
	Personalverwaltung(const std::string&);

	void ausgeben();
	void dialog();

private:
	std::vector<Person> personal;

};

#endif // !personalverwaltung_h
