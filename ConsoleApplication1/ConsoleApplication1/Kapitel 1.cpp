// ConsoleApplication1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <stdlib.h>
#include<iostream>
#include<limits>
#include<string>
#include<math.h>
#include<fstream>
#include<iostream>
#include<vector>
using namespace std;


int uebung1() {
	int summe;
	int summand1;
	int summand2;

	cout << "Bitte zwei ganze Zahlen eingeben\n";
	cin >> summand1 >> summand2;

	summe = summand1 + summand2;

	cout << "Die Summe der beiden Zahlen ergibt: " << summe;


	return 0;
}


int uebung2() {
	cout << "Grenzwerte für Ganzzahl Typen: \n";
	cout << "int Minimum:                     " << numeric_limits<int>::min() << "\n";
	cout << "int Maximum:                     " << numeric_limits<int>::max() << "\n";
	cout << "long Minimum:                    " << numeric_limits<long>::min() << "\n";
	cout << "long Maximum:                    " << numeric_limits<long>::max() << "\n";
	cout << "long long Minimum:               " << numeric_limits<long long>::min() << "\n";
	cout << "long long Maximum:               " << numeric_limits<long long>::max() << "\n";

	cout << "unsigned int:                    " << numeric_limits<unsigned int>::max() << "\n";
	cout << "unsigned long:                   " << numeric_limits<unsigned long>::max() << "\n";
	cout << "unsigned long long:              " << numeric_limits<unsigned long long>::max() << "\n";


	cout << "Anzahl der verwendeten Bits pro Datentyp\n";


	cout << "int        " << sizeof(int) * 8 << "\n";
	cout << "long       " << sizeof(long) * 8 << "\n";
	cout << "long long  " << sizeof(long long) * 8 << "\n";


	return 0;

}

void uebung3() {
	int a{ 5 };
	int b{ 7 };
	int c;
	int d;
	double f = -0.3567364;

	c = ++a;
	d = b++;

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
	cout << d << "\n";
	cout << abs(f);

}

void uebung4() {
	while (true) {
		float x;
		cout << "x eingeben: ";
		cin >> x;
		cout << "\n";
		cout << "x            =" << x << "\n";
		cout << "fabs(x)      =" << fabs(x) << "\n\a";
		cout << "sqrt(x)      =" << sqrt(x) << "\n";
		cout << "sin(x)       =" << sin(x) << "\n";
		cout << "exp(x)       =" << exp(x) << "\n";
		cout << "log(x)       =" << log(x) << "\n";
	}
	{

	}
}


void test12() {

	unsigned int umax = ~0;

	cout << "unsigned int max: " << umax << "\n";

	int maxint = umax / 2 + 1;

	cout << "sigend int max: " << maxint << "\n";

	int a = 5;
	int b = 3;

	(cout << b) << a;

}

void uebung5() {

	char character;

	cin >> character;

	if (character >= 'A' && character <= 'Z')
		cout << "\n" << character << " ist ein Großbuchstabe \n";
	else
		cout << "\n" << character << " ist ein Kleinbuchstabe\n";

}


void test13() {

	cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
	cout << "---------------------------------------------------Aufgabe 1.3---------------------------------------------------------\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------\n";

	int numstart;
	int numend;
	int num3;

	cout << "Bitte geben Sie nacheinander drei ganze Zahlen ein, jede Zahl muss mit Enter bestätigt werden: \n 1. Zahl (Bereich Anfang): ";
	cin >> numstart;
	cout << "\n 2. Zahl (Bereich Ende): ";
	cin >> numend;
	cout << "\n 3. Zahl (Wert zwischen Anfang und Ende?)";
	cin >> num3;

	if (numstart > numend) {
		cout << "\n Der Anfangswert ist größer als der Endwert, mathematischer Fehler";
		return;
	}
	
	
	if (num3 <= numend && num3 >= numstart) {
		cout << "\nZahl 3 liegt in den vorgegebene Grenzen";
		return;
	}

	cout << "\nZahl 3 liegt nicht innerhalb der vorgegebenen Grenzen";

	
}


void test14() {
	cout << "\n-----------------------------------------------------------------------------------------------------------------------\n";
	cout << "---------------------------------------------------Aufgabe 1.4---------------------------------------------------------\n";
	cout << "-----------------------------------------------------------------------------------------------------------------------\n";


	int numstart;
	int numend;
	int num3;

	cout << "Bitte geben Sie nacheinander drei ganze Zahlen ein, jede Zahl muss mit Enter bestätigt werden: \n 1. Zahl (Bereich Anfang): ";
	cin >> numstart;
	cout << "\n 2. Zahl (Bereich Ende): ";
	cin >> numend;
	cout << "\n 3. Zahl (Wert zwischen Anfang und Ende?)";
	cin >> num3;




	if (numstart > numend && numstart > num3) {
		cout << "\nZahl 1: " << numstart << "ist die größte der drei Zahlen";
		return;
	}

	if (numend > num3) {
		cout << "\nZahl 2: " << numend << " ist die größte der drei Zahlen";
		return;
	}

	cout << "\nZahl 3: " << num3 << " ist die größte der drei Zahlen";



}

void uebung6() {

	char number;
	int ziffer = 0;
	cout << "\nBitte geben Sie eine roemische Zahl ein. Wir werden pruefen ob es wirklich roemische Ziffern sind.: ";
	cin >> number;
	
	switch (number)
	{
	case 'i':
		[[__fallthrough]];
	case 'I':
		ziffer = 1;
		break;
	
	
	case 'v':
		[[__fallthrough]];
	case 'V':
		ziffer = 5;
		break;


	case 'x':
		[[__fallthrough]];
	case 'X':
		ziffer = 10;
		break;


	case 'l':
		[[__fallthrough]];
	case 'L':
		ziffer = 50;
		break;


	case 'c':
		[[__fallthrough]];
	case 'C':
		ziffer = 100;
		break;


	case 'd':
		[[__fallthrough]];
	case 'D':
		ziffer = 500;
		break;


	case 'm':
		[[__fallthrough]];
	case 'M':
		ziffer = 1000;
		break;


	default:
		ziffer = 0;
		break;
	}

	if (ziffer != 0)
		cout << "Der Buchstabe " << number << " ist eine roemische Ziffer mit dem Wert: " << ziffer << "\n";
	else
		cout << "Der Buchstabe " << number << " ist keine roemische Ziffer." << "\n";
}


void ggtwhile() {
	
	int x;
	int y;

	cout << "2 Zahlen größer 0 eingeben: ";
	cin >> x >> y;
	cout << "Der ggT von " << x << " und " << y << " ist ";

	while (x != y) {
		if (x > y) {
			x = x - y;
		}
		else {
			y = y - x;
		}

	}
	
	cout  << x << "\n";
	
}


void test15() {

	int number;
	cout << "Bitte geben Sie eine Zahl ein: ";
	cin >> number;

	for (int i = 0; i <= 31; i++) {
		if (number  & (1 << (31-i))) {
			cout << "1";
		}
		else {
			cout << "0";
		}
	}

	cout << "\n\n";
}


void test18() {
	//Lösung zu Aufgabe 1.8
	int n1, n2;
	int summe = 0;
	cout << "\nBitte geben Sie zwei natuerliche Zahlen ein, wobei die erste groeßer als die zweite sein muss ";
	cin >> n1 >> n2;

	//a) for schleife
	for (int i = n1; i <= n2; i++) {
		summe += i;
	}

	cout << "\nLoesung mit FOR-Schleife: " << summe;


	//b) while Schleife
	int i = n1;
	summe = 0;
	while (i<=n2){
		summe += i;
		i++;
	}
	cout << "\nLoesung mit WHILE-Schleife: " << summe;


	i = n1;
	summe = 0;
	//c) do while Schleife
	do
	{
		summe += i;
		i++;
	} while (i<=n2);
	cout << "\nLoesung mit DO-WHILE Schleife: " << summe;

	summe = 0;
	//d) ohne Schleife
	summe = ((n2*(n2+1)) / 2) - (((n1-1)*(n1)) / 2);
	cout << "\nLoesung OHNE Schleife: " << summe;

}


void test110() {
	struct Person {
		string Vorname;
		string Nachname;
		int Alter;
	};

	Person Person1;


	getline(cin, Person1.Nachname);
	getline(cin, Person1.Vorname);
	cin >> Person1.Alter;


	cout << Person1.Nachname << Person1.Vorname << Person1.Alter;

}

void test111() {
	string test = "17462309";
	string number;
	int summe = 0;
	for (size_t i = 0; i < test.size(); i++)
	{
		number = test.at(i);
		summe += atol(number.data());
		
	}

	cout << summe;
	cin >> summe;
}

void roemzahlumrechnung() {
	int zahl;
	int number;
	cout << "Bitte eine Zahl eingeben, die in eine römische umgewandelt werden soll!";
	cin >> zahl;



	number = zahl / 1000;
	for (size_t i = 0; i < number; i++)
	{
		cout << "M";
	}

	zahl -= number * 1000;
	number = zahl / 500;

	for (size_t i = 0; i < number; i++)
	{
		cout << "D";
	}
	zahl -= number * 500;
	number = zahl / 100;

	if (number > 3) {
		cout << "CD";
	}
	else
	{
		for (size_t i = 0; i < number; i++)
		{
			cout << "C";
		}
	}

	zahl -= number * 100;
	number = zahl / 50;
	for (size_t i = 0; i < number; i++)
	{
		cout << "L";
	}
	zahl -= number * 50;
	number = zahl / 10;


	if (number > 3) {
		cout << "XL";
	}
	else
	{
		for (size_t i = 0; i < number; i++)
		{
			cout << "X";
		}
	}


	zahl -= number * 10;
	number = zahl / 5;
	for (size_t i = 0; i < number; i++)
	{
		cout << "L";
	}
	zahl -= number * 5;
	
	//if(zahl )
}



void test113() {
	const int start = -99;
	const int end = 100;
	const int intervallamount = 10;


	vector<int> intervalle(intervallamount + 1);
	vector<int> cntinterv(intervallamount);
	double intsize = (abs(start) + abs(end)) / (intervallamount);
	intervalle[0] = start;

	/*
	Erstellen möglichst gleich großer Intervalle, wobei die vorangeschobenen Intervalle am größten sind
	
	*/
	for (size_t i = 1; i < intervalle.size(); i++)
	{
		intervalle[i] = intervalle[i - 1] + intsize;
	}

	int difference = abs(end - intervalle[intervallamount]);
	while (difference > 0) {
		int x = 0;
		for (size_t i = 1; i <= intervallamount; i++)
		{
			if (difference > 0)
			{
				intervalle[i] +=  1 + x;
				x++;
				difference--;
			}
			else
			{
				intervalle[i] += x;
			}
			
		}
	}


	cout << "\n Intervalle eingerichtet, Zahlen koennen nun eingegebn werden";

	while (true)
	{
		int zahl;
		cout << "\n Zahl eingeben: ";
		cin >> zahl;

		if (!(zahl >= start && zahl <= end)) {
			cout << "\nZahl auserhalb des gesamten Bereiches, Eingabe wurde beendet \n";
			break;
		}

		for (size_t i = 0; i < intervallamount; i++)
		{
			if ((zahl >= intervalle[i] && zahl <= intervalle[i + 1])) {
				cntinterv[i]++;
				break;
			}
		}


	}
	
	for (size_t i = 0; i < intervallamount; i++)
	{
		cout << "\n Anzahl Zahlen im Intervall " << i + 1 << "\t(" << intervalle[i] << " - " << intervalle[i + 1] << "): \t" << cntinterv[i];
	}

	string dummy;
	getline(cin, dummy);
}


void test114() {
	long long start;
	long long maximum = 0;
	long long iterator = 0;

	cout << "Bitte eine Zahl eingeben die mit der Achterbahn fahren soll: ";
	cin >> start;
	maximum = start;
	while (start > 1)
	{
		if ((start%2)) {
			start = start *3 + 1;
		}
		else
		{
			start = start /2;
		}

		if (start > maximum) {
			maximum = start;
		}
		iterator++;
		//cout << "\n" << start;
	}

	cout << "Der Maximal erreichte Wert entspricht: " << maximum;
	cout << "\nEs wurden " << iterator << " Schritte ausgeführt";
}

void uebung7() {

	cout << "Bitte Vor und Nachnamen eingeben: ";
	string Name;
	cin >> Name;
	cin.clear();
	cout << "\n" << Name;
	cout << "\nFehler bitte nochmal eingeben";
	getline(cin, Name);
	cout << "\n";
	cout.width(15);
	cout << Name;


}

void dateienbearbeiten() {
	string dateiname;
	cout << "Dateiname? ";
	cin >> dateiname;

	//Datei schreiben

	ofstream datei(dateiname);

	if (!datei.good()) {
		cerr << dateiname << " kann nicht beschrieben werden!\n";
	}
	else
	{
		datei << "geschriebener Text.\n Zweite Zeile.\n";
		datei.close();
	}

	ifstream quelle(dateiname);

	cout << "Der Inhalt der Datei ist:\n";
	while (quelle.good())
	{
		string zeile;
		getline(quelle, zeile);
		cout << zeile << "\n";
	}
	quelle.close();
	
}

void test115() {
	string dateiname;
	cout << "Dateiname? ";
	cin >> dateiname;

	//Datei schreiben

	ifstream datei(dateiname);

	if (!datei.good()) {
		cerr << dateiname << " kann nicht beschrieben werden!\n";
		return;
	}

	char ch;
	unsigned int cntchar = 0;
	unsigned int cntword = 0;
	unsigned int cntline = 0;
	bool wbreak = true;

	while (datei.get(ch))
	{
		cout << ch;
		if (ch == '\n')
		{
			cntline++;
			wbreak = true;
			continue;
		}


		
		cntchar++;


		if (ch == ' ')
		{
			wbreak = true;
		}
		else if(wbreak)
		{
			cntword++;
			wbreak = false;
		}


	}

	datei.close();
	datei.clear();

	datei.open(dateiname);

	while (datei.get(ch))
	{
		unsigned char c = static_cast<unsigned char>(ch);
		unsigned int zahl = static_cast<unsigned int>(c);

		cout << hex << zahl << " \a";
	}

	cout << dec <<  "Anzahl der Zeichen: " << cntchar << "\n";
	cout << "Anzahl der Woerter: " << cntword << "\n";
	cout << "Anzahl der Zeilen: " << cntline << "\n";


}

void test118() {
	string filename;
	string line;
	struct StudentIn
	{
		string Name;
		string Matrikelnummner;
	};

	string tmpName;
	string tmpMatr;

	vector<StudentIn> StudList;
	
	bool name = true;
	
	
	cout << "Bitte Dateinamen eingeben: ";
	cin >> filename;

	
	
	ifstream datei(filename);
	if (!datei.good()) {
		cout << "Datei fehlerhaft/kann nicht gelesen werden!";
		return;
	}

	//datei.open();
	
	while (true)
	{
		getline(datei, line);
		if (line[0] == '#') {
			cout << "Am Ende der Datei angelagt. Fertig eingelesen";
			datei.close();
			datei.clear();
			break;
		}


		if (name) {
			tmpName = line;
			name = false;
		}
		else {
			tmpMatr = line;
			StudList.push_back(StudentIn{ tmpName, tmpMatr });

			name = true;
		}


	}
	

	cout << "\n\n\n";

	for (size_t i = 0; i < StudList.size(); i++)
	{
		cout << "\n" << StudList.at(i).Name;
		cout << "\n" << StudList.at(i).Matrikelnummner << "\n";
	}


	// Suchfunktion für StudList

	while (true)
	{
		cout << "\nBitte die zu Suchende Matrikelnummer eingeben (x oder X) zum abbrechen: ";
		cin >> tmpMatr;
		tmpName = "";

		if (tmpMatr[0] == 'x' || tmpMatr[0] == 'X') {
			cout << "\n Abfrage beendet";
			break;
		}

		for (size_t i = 0; i < StudList.size(); i++)
		{
			if (tmpMatr == StudList[i].Matrikelnummner) {
				tmpName = StudList[i].Name;
				break;
			}
		}

		if (tmpName == "") {
			cout << "\nMatrikelnummer konnte nicht gefunden werden! ";
			continue;
		}

		cout << "\nStudentIn konnte gefunden werden:";
		cout << "\n" << tmpMatr << "\n" << tmpName << "\n\n\n";
	}


}

/*
int main()
{
	while(1){
		//test113();
		//test114();
		//dateienbearbeiten();
		//test118();

		unsigned int n;

		cout << "Turm von Hanoi! Wie viele Scheiben: ";
		cin >> n;

		bewegen(n, 1, 2, 3);


		cout << "\n";
	}
	return 0;
}

*/
