#pragma once
#ifndef teilnehmer_h
#define teilnehmer_h
#include<string>
#include<vector>

class Teilnehmer
{
public:
	Teilnehmer(std::string);
	~Teilnehmer();


	void bekanntschaftende(Teilnehmer*);
	void neubekanntschaft(Teilnehmer*);
	void lerntKennen(Teilnehmer&);
	std::string gibNamen();
	void druckeBekannte();
	bool kennt(Teilnehmer &);

private:
	std::vector<Teilnehmer*> bekannte;
	std::string Namen;

};


#endif // !teilnehmer_h
