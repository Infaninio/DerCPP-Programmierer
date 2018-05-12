#pragma once



#ifndef person_h
#define person_h




#include<string>



enum class Geschlecht{m, w};


class Person
{
public:
	Person();
	Person(const std::string& Name, const std::string& Personalnummer, const Geschlecht Geschlecht);
	//~Person();

	std::string getName();
	std::string getPersonalnummer();
	void setName(const std::string& neuerName);

	bool istFrau();
	bool istMann();


private:
	std::string Name;
	std::string Personalnummer;
	Geschlecht Geschlecht;


};

#endif // !person_h