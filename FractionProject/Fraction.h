/*
Fraction.h
Zoey Anderson
Guided Practice 3 - Operator Overloading
6/24/2025
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

	// accessors
	int getNum() const;
	int getDen() const;

	// constructors
	Fraction();
	Fraction(int n, int d);
	Fraction(string frac);

	// operator overloads
	Fraction operator+ (const Fraction& f);
	Fraction operator- (const Fraction& f);
	Fraction operator* (const Fraction& f);
	Fraction operator/ (const Fraction& f);
	Fraction& operator= (const Fraction& f);
};

#endif