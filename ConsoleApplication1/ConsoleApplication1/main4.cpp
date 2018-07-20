#include"stdafx.h"
#include<cstdlib>
#include<string>
#include<time.h>
#include<iostream>
#include<iostream>
#include<fstream>

/*
Aufgabe 4.5

*/

void strcopy(char* ziel, char* quelle) {

	int i = 0;

	while (quelle[i] != '\0')
	{
		ziel[i] = quelle[i];
		i++;
	}
	ziel[i] = quelle[i];

}



/*
Aufgabe 4.6
*/
char* strduplicat(char* quelle) {
	int length = 0;
	
	while (quelle[length++] != '\0'){}
	length++;
	char* ziel;
 	ziel = new char[length];

	strcopy(ziel, quelle);

	return ziel;
}

void winkelgenerator(void) {
	
	srand(time(NULL));

	while (true)
	{
		int v1, v2, v3, v3soll, a;
		float b, c, fl, flsoll, s;

		v1 = std::rand() % 180 + 1;
		v2 = std::rand() % 180 + 1;
		a = std::rand() % 5 + 5;
		
		while ((v1 + v2) >= 180)
		{
			v2 = std::rand() % 180 + 1;
		}

		std::cout << "\n\nWinkel1: " << v1 << "\nWinkel 2: " << v2 << "\nGrundseitenlaenge: " << a<<  "\n\nBitte 3. Winkel als Lösung angeben: ";

		std::cin >> v3;
		v3soll = (180 - v1 - v2);

		if (!(v3soll == v3)){
			std::cout << "\n Die Loesung ist leider falsch, der richtige Winkel waere " << (180 - v1 - v2) << "\n";
			}
		b = a / std::sin(v3soll) * std::sin(v1);
		c = a / std::sin(v3soll) * std::sin(v2);

		s = (a + b + c) / 2;
		flsoll = std::sqrt(s*(s - b)*(s - c)*(s - a));
		std::cout << "\n\nBitte Flaeche des Dreiecks eingeben";
		std::cin >> fl;



		if (fl != flsoll) {
			std::cout << "Die eingegebene Flaeche ist falsch, Richtig waere: " << flsoll;
		}

	}
}

/*
Aufgabe 4.7


*/
int stringcomp(const void *a, const void *b) {
	const char* str1 = *static_cast<const char* const*>(a);
	const char* str2 = *static_cast<const char* const*>(b);
	
	return strcmp(str1, str2);
}
void stringsort(const char *feld[], size_t number) {


	std::qsort(feld, number, sizeof(char*),stringcomp);
}



//Aufgabe 4.8
void leerzeichenentfernen(char* s) {
	int i = 0;
	int x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ') {
			while (s[x] != '\0')
			{
				s[x] = s[x + 1];
				x++;
			}
			i--;
		}

		i++;
		x = i;
	}
}


//Aufgabe 4.9
void printfile(char* name) {
	std::ifstream datei(name);
	std::string line;


	if (!datei.good()) {
		std::printf("Datei %s kann nicht geoeffnet werden\n", name);
		return;
	}

	while (!datei.eof())
	{
		std::getline(datei, line);
		std::cout << "" << line << "\n";
		std::printf("\n");
	}
	datei.close();

}


bool istbuchstabe(char bst) {
	
	if ((bst >= 'A' && bst <= 'Z') || (bst >= 'a' && bst <= 'z')) {
		return true;
	}
	return false;
}

bool istZahl(char bst) {
	if ((bst >= '0' && bst <= '9') || '_' == bst)
	{
		return true;
	}
	return false;
}

//Aufgabe 4.10
void readnames(char* fname) {
	std::ifstream datei(fname);

	if (!datei.good()) {
		std::cout << "die datei" << fname << "kann nicht gelesen werden\n";
		return;
	}

	bool bname = false;
	while (!datei.eof())
	{
		char c;
		datei.get(c);
		

		if (istbuchstabe(c))
		{
			bname = true;
			std::cout << c;
		}
		else if (istZahl(c) && bname)
		{
			std::cout << c;
		}
		else
		{
			bname = false;
			std::cout << "\n";
		}
	}
}

void main(int argc, char* argv[]) {
	int x;
	/*Aufgabe 4.7
	const char *sfeld[] = { "eins", "zwei", "drei", "vier", "fuenf", "sechs", "sieben", "acht", "neun", "zehn" };
	size_t anzahl  = sizeof(sfeld) / sizeof(sfeld[0]);
	stringsort(sfeld, anzahl);
	for (size_t i = 0; i < std::size(sfeld); i++)
	{
		std::cout << sfeld[i] << "\n";
	}

	*/
	/*Aufgabe 4.8
	char test[] = "aa    bbb ccccc dd  f";
	leerzeichenentfernen(test);
	std::cout << test;

	*/

	/*
	Aufgabe 4.9
	
	for (size_t i = 0; i < argc-1; i++)
	{
		printfile(argv[i+1]);
	}
	*/

	/*
	Aufgabe 4.10

	for (size_t i = 0; i < argc-1; i++)
	{
		readnames(argv[i + 1]);
	}
	*/

	std::cin >> x;
}

