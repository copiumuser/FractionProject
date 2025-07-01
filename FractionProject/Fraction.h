/*
Fraction.h
Zoey Anderson
Guided Practice 1 - Creating A Class
6/11/2025
*/

#ifndef FRACTION
#define FRACTION

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
};

#endif