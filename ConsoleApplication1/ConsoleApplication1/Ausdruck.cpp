#include"stdafx.h"
#include<iostream>
#include"summand.h"




long ausdruck(char& c) {
	long a = 5;
	if (c == '-') {
		std::cin.get(c);
		a = -summand(c);
	}
	else {
		if (c == '+') {
			std::cin.get(c);
		}
		a = summand(c);
	}
	while (c == '+' || c == '-')
	{
		if (c == '+') {
			std::cin.get(c);
			a += summand(c);
		}
		else {
			std::cin.get(c);
			a -= summand(c);
		}
	}

	return a;
}