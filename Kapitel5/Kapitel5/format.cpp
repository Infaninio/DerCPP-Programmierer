#include"stdafx.h"
#include "format.h"
#include <iostream>

Format::Format(size_t v, size_t n)
{
	this->vorkomma = v-n-1;
	this->nachkomma = n;
}

std::string Format::toString(double wert)
{
	std::string fertig;
	int32_t tmp = static_cast<int> (wert);
	
	if (std::abs(wert) > std::pow(10, vorkomma )) {
		std::cout << "Format wurde erweitert!\n";
		fertig = std::to_string(tmp);
	}
	else
	{

		int i = vorkomma-1;
		while (true) {
			int vgl = std::pow(10, i);
			if ((tmp % vgl) == tmp) {
				fertig = fertig + ' ';
				i--;
			}
			else
			{
				fertig += std::to_string(tmp);
				break;
			}
		}


	}

	//Nun folgt der Nachkommateil
	wert -= tmp;
	wert *= std::pow(10, nachkomma);
	tmp = std::abs(static_cast<int>(wert));
	fertig += ',' + std::to_string(tmp);

	
	return fertig;
}
