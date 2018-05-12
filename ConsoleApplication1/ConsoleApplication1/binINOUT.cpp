#include"stdafx.h"
#include<cstdlib>
#include<fstream>
#include<iostream>


void writebin() {
	std::ofstream ziel("examples/double.dat", std::ios::binary);

	if (!ziel) {
		std::cout << "Datei kann nicht gelesen werden";
		return;
	}

	unsigned int d = 1;
	for (int i = 0; i < 20; i++, d *= 10.1) {
		ziel.write(reinterpret_cast<const char*>(&d), sizeof(d));
		std::cout << " " << d << "\n";
	}

}


void readbin() {
	std::ifstream quelle("examples/double.dat", std::ios::binary);

	if (!quelle) {
		std::cout << "Datei kann nicht gelesen werden";
	}

	int d;

	while (quelle.read(reinterpret_cast<char*>(&d), sizeof(d)))
	{
		std::cout << "  " << d << "\t" << sizeof(d) << "\n";

	}
}




/*

void main() {
	writebin();
	readbin();

	int y;
	std::cin >> y;
}

*/