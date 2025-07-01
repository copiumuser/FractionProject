/*
Fraction.h
Zoey Anderson
Guided Practice 2 - Constructors
6/17/2025
*/

#ifndef FRACTION
#define FRACTION

#include <string>

using std::string;

class Fraction {
private:
	int num; // numerator
	int den; // denominator

public:
	void setFraction(int n, int d);
	Fraction add(const Fraction& f);
	Fraction sub(const Fraction& f);
	Fraction mult(const Fraction& f);
	Fraction div(const Fraction& f);

	void printFraction();

	Fraction();
	Fraction(int n, int d);
	Fraction(string frac);
};

#endif