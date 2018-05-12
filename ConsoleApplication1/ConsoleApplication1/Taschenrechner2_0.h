#pragma once
#include<string>


#ifndef Taschenrechner2_0_h
#define Taschenrechner2_0_h

class Taschenrechner
{
public:
	Taschenrechner(std::string term);
	void newString(std::string term);

private:
	long ausdruck(char&);
	long zahl(char&);
	long faktor(char&);
	long summand(char&);
	void get(char&);
	std::string term;
	unsigned int pos;
};






#endif // !Taschenrechner2_0_h

