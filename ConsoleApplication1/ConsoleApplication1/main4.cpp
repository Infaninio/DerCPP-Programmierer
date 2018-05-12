#include"stdafx.h"
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<time.h>

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

int stringcomp(char* str1, char* str2) {
	return std::strcmp(str1, str2);
}

/*
void stringsort(char* feld[]) {
	int(*vergleich)(char*, char*);
	vergleich = stringcomp;

	std::qsort(feld, sizeof(feld), sizeof(feld[0]),stringcomp);
}

*/



void main() {
	int x = 0;
	while (true) {
		char test1[] = "Ich bin ein ziemlich kurzer Test";
		char* test2;

		//test2 = strduplicat(test1);

		//std::cout << test1 << "\n" << test2;

		winkelgenerator();
		x++;
		//std::cin >> x;


	}
}