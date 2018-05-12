#include"stdafx.h"
#include<iostream>

/*
	Vorraussetzung für Matrix multiplikation a[n][m] * b[p][q] = c[r][s]

	n = q
	m = p
	r = n
	s = m
	
*/

template<typename Feldtyp>
void tabellenausgabe3D(Feldtyp &a) {

	constexpr unsigned int ZEILEN = sizeof(a) / sizeof(a[0]);
	constexpr unsigned int SPALTEN = sizeof(a[0]) / sizeof(a[0][0]);
	constexpr unsigned int TABELLEN = sizeof(a[0][0]) / sizeof(a[0][0][0]);
	//std::cout << "Zeilen: " << ZEILEN << "\tSpalten: " << SPALTEN;
	//std::cout << "\n" << a[ZEILEN - 1][SPALTEN - 1][TABELLEN - 1] << "\n";

	for (size_t i = 0; i < TABELLEN; i++)
	{

		//std::cout << "\n Tabelle: " << i;
		for (size_t x = 0; x < SPALTEN; x++)
		{
			std::cout << "\n";
			for (size_t y = 0; y < ZEILEN; y++)
			{
				std::cout << " " << a[y][x][i];
			}
		}
	}


	return;
}


/*
void main() {
	int feld[3][5][8];
	feld[2][4][7] = 10;
	feld[2][4][3] = 10;
	tabellenausgabe3D(feld);

	std::cin >> feld[2][1][3];

}

*/