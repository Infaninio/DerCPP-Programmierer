#include"stdafx.h"
#include"IntMenge.h"
#include<iostream>



IntMenge::IntMenge() {};

void IntMenge::hinzufuegen(int el) {
	
	if (!(IntMenge::istMitglied(el))) {
		IntMenge::Menge.push_back(el);
	}	
}

void IntMenge::entfernen(int el) {
	int tmp = 0;
	for (int zahl : IntMenge::Menge) {
		if (zahl == el) {
			IntMenge::Menge.erase(IntMenge::Menge.begin() + tmp);

		}
		tmp++;
	}
}


bool IntMenge::istMitglied(int el) {
	for (int zahl : IntMenge::Menge) {
		if (zahl == el) {
			return true;
		}
	}

	return false;
}


size_t IntMenge::size() {
	return IntMenge::Menge.size();
}

void IntMenge::anzeigen() {
	std::cout << "\n";

	for (int zahl : IntMenge::Menge)
	{
		std::cout << zahl << " ";
	}

	std::cout << "\n";
}

void IntMenge::loeschen() {
	IntMenge::Menge.clear();
}

int IntMenge::getMax() {
	int tmp = 0;

	for (int zahl : IntMenge::Menge) {
		if (zahl > tmp) {
			tmp = zahl;
		}
	}

	return tmp;
}

int IntMenge::getMin() {
	int tmp = IntMenge::Menge[0];

	for (int zahl : IntMenge::Menge) {
		if (zahl < tmp) {
			tmp = zahl;
		}
	}

	return tmp;
}
