// Kapitel5.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include "stdafx.h"
#include"MeinString.h"
#include "format.h"
#include<iostream>
#include<string>



int main()
{
	MeinString test1;
	test1.assign("I bims ein Test !\n");
	anzeigen(std::cout, test1);
	test1.assign("dada\n");
	anzeigen(std::cout, test1);
	test1.assign("dfaksöfjdsklfjsdaölkfjsdklöfjdskölaf   fdsajfödslf jsdaf dsf dsaföjdsaf\n");
	anzeigen(std::cout, test1);
	
	MeinString test2("noch ein Test\n");
	anzeigen(std::cout, test2);

	test2.swap(test1);

	test1.insert(0, "lul");
	anzeigen(std::cout, test1);
	anzeigen(std::cout, test2);
	


	Format f(12, 3);
	std::cout << f.toString(789.906625) + '\n';
	std::cout << f.toString(-123456789.906625) +'\n';




	int i;
	std::cin >> i;

}

