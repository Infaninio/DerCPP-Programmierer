#include "stdafx.h"
#include <stdlib.h>
#include<iostream>
#include<limits>
#include<string>
#include<math.h>
#include<fstream>
#include<iostream>
#include<vector>
#include "gettype.cpp"
using namespace std;




int dauerInSekunden(int stunden, int minuten, int sekunden) {

	return stunden * 3600 + minuten * 60 + sekunden;


}

double power(double x, int y) {
	double start = x;


	if (y == 0) {
		return 1;
	}

	for (size_t i = 0; i < abs(y); i++)
	{
		start *= x;
	}

	if (y < 0) {
		return 1 / start;
	}
	else {
		return start;
	}

}

int fakultaet(int zahl) {
	return fakultaet(zahl - 1) + zahl;
}

void bewegen(unsigned int n, unsigned int  quelle, unsigned int ziel, unsigned zwischen) {

	//static unsigned long long counter = 0;
	//counter++;
	if (n > 0) {
		bewegen(n - 1, quelle, zwischen, ziel);

		//cout << "Bringe eine Scheibe von " << quelle << " nach " << ziel << "\t\t " << counter << "\n";

		bewegen(n - 1, ziel, zwischen, quelle);


	}

}


void str_umkehren(string& s) {
	
	string tmp = s;
	unsigned int length = s.length() - 1;
	for (size_t i = 0; i < length; i++)
	{
		tmp[length - i] = s[i];
	}

	s = tmp;
	
}



bool istAlphanumerisch(const string& s);
bool isletter(const char& c) {
	if (c >= 'a' && c <= 'z') {
		return true;
	}

	if (c >= 'A' && c <= 'Z') {
		return true;
	}

	return false;
}

bool istAlphanumerisch(const string& s) {

	for (const char& c : s) {
		if (!(isdigit(c) || isletter(c))) {
			return false;
		}
	}
	

	return true;
}

/*

int main() {

	int i;		std::cout << getType(i) << "\n";
	unsigned int ui;		std::cout << getType(ui) << "\n";
	char c;		std::cout << getType(c) << "\n";
	bool b;		std::cout << getType(b) << "\n";
	float f;		std::cout << getType(f) << "\n";

	string test;
	cin >> test;
}

*/
