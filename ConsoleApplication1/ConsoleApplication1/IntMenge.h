#pragma once
#include<vector>



class IntMenge
{
public:
	IntMenge();
	void hinzufuegen(int el);
	void entfernen(int el);
	bool istMitglied(int el);
	size_t size();
	void anzeigen();
	void loeschen();
	int getMax();
	int getMin();

private:

	std::vector<int> Menge;
};

