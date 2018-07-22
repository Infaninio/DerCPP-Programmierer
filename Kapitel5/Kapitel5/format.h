#pragma once
#ifndef format_h
#define format_h
#include <string>

class Format
{
public:
	Format(size_t, size_t);
	std::string toString(double);

private:
	size_t vorkomma;
	size_t nachkomma;
};





#endif // !format_h
