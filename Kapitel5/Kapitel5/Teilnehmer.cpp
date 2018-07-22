#include"stdafx.h"
#include"teilnehmer.h"
#include<iostream>





Teilnehmer::Teilnehmer(std::string name) {
	this->Namen = name;
}

std::string Teilnehmer::gibNamen() {
	return this->Namen;
}

void Teilnehmer::lerntKennen(Teilnehmer& neubekannt) {
	bekannte.push_back(&neubekannt);
	neubekannt.neubekanntschaft(this);
}

void Teilnehmer::neubekanntschaft(Teilnehmer* neu) {
	bekannte.push_back(neu);
}

void Teilnehmer::druckeBekannte() {
	std::cout << '\n';
	for (auto t1 : bekannte)
	{
		std::cout << t1->gibNamen() << '\n';
	}
}


void Teilnehmer::bekanntschaftende(Teilnehmer* t) {
	for (size_t i = 0; i < bekannte.size(); i++)
	{
		if (bekannte[i] == t) {
			bekannte.erase(bekannte.begin() + i);
			break;
		}
	}
}

Teilnehmer::~Teilnehmer() {
	for(auto t1 : bekannte)
	{
		t1->bekanntschaftende(this);
	}
}

bool Teilnehmer::kennt(Teilnehmer & t) {
	for (auto t1 : bekannte) {
		if (t1 == &t)
			return true;
	}

	return false;
}