#include"stdafx.h"
#include "meinstring.h"
#include <cassert>
#include <cstring>  // strlen()


MeinString::MeinString(const char* str) {
	
	daten.assign(str, str + std::strlen(str)+1);
}


MeinString& MeinString::assign(const char* str) {
	daten.resize(std::strlen(str) + 1);
	daten.assign(str, str + std::strlen(str) + 1);
	return *this;
}


const char& MeinString::at(std::size_t pos) const {
	return daten[pos];
}

char& MeinString::at(std::size_t pos) {
	return daten[pos];
}

void MeinString::swap(MeinString& mstrt) {
	std::swap(this->daten, mstrt.daten);
}


//Aufgabe 5.1
void MeinString::insert(std::size_t pos,const MeinString& m) {
	int szt = m.length();
	int length = daten.size();
	if (pos > length - 1)
		pos = length - 1;
	daten.resize(length + szt);
	int i = 1;
	while (i < length-pos+1)
	{
		daten[length+szt-i] = daten[length-i];
		i++;
	}

	i = pos;
	
	for (size_t z = 0; z < szt; z++)
	{
		daten[i] = m.at(z);
		i++;
	}
	
	

}


void anzeigen(std::ostream& os, const MeinString& m) {
	os << m.data();
}