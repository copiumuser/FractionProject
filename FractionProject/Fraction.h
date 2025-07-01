/*
Fraction.h
Zoey Anderson
Guided Practice 5 - Dynamic Memory Allocation
7/1/2025
*/

#ifndef FRACTION
#define FRACTION

#include <string>
#include <iostream>

using std::string;

class Fraction {
private:
	int *num; // numerator
	int *den; // denominator

	void create();

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
	Fraction(const int n, const int d);
	Fraction(const string frac);
	Fraction(const Fraction& other);

	// operator overloads
	Fraction operator+ (const Fraction& f);
	Fraction operator- (const Fraction& f);
	Fraction operator* (const Fraction& f);
	Fraction operator/ (const Fraction& f);
	Fraction& operator= (const Fraction& f);

	friend std::istream& operator >> (std::istream& input, Fraction& f);
	friend std::ostream& operator << (std::ostream& output, Fraction& f);

	// destructor
	~Fraction();
};

#endif