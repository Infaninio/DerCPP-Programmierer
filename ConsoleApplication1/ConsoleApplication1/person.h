#pragma once



#ifndef person_h
#define person_h




#include<string>



enum class Geschlecht{m, w};


class Person
{
public:
	Person();
	Person(const std::string& Name, const unsigned int& Alter, const Geschlecht Geschlecht);
	//~Person();

	std::string getName();
	unsigned int getAlter();
	void setName(const std::string& neuerName);
	void setAlter(const unsigned int neuesAlter);

	bool istFrau();
	bool istMann();


private:
	std::string Name;
	unsigned int Alter;
	Geschlecht Geschlecht;


};

#endif // !person_h