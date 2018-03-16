#include "stdafx.h"
#include<iostream>


long zahl(char& c) {
	long z = 0;

	while (isdigit(c))
	{
		z = 10 * z + long(c - '0');
		std::cin.get(c);
	}
	return z;
}