#include"stdafx.h"
#include<iostream>
#include"zahl.h"
#include"ausdruck.h"



long faktor(char& c) {
	long f;
	if (c == '(') {
		std::cin.get(c);
		f = ausdruck(c);
		if (c != ')') {
			std::cout << "Rechte Klammer fehlt!\n";
		}
		else
		{
			std::cin.get(c);
		}
	}
	else
	{
		f = zahl(c);
	}

	return f;
}
