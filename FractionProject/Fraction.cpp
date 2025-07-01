/*
Fraction.cpp
Zoey Anderson
Guided Practice 1 - Creating A Class
6/11/2025
*/

#include <iostream>

#include "Fraction.h"

using namespace std;

void Fraction::setFraction(int n, int d) {
	num = n;
	den = d;
}

Fraction Fraction::add(const Fraction& f) {
	Fraction temp;
	temp.num = (num * f.den) + (f.num * den);
	temp.den = (f.den * den);
	return temp;
}

Fraction Fraction::sub(const Fraction& f) {
	Fraction temp;
	temp.num = (num * f.den) - (f.num * den);
	temp.den = (f.den * den);
	return temp;
}

Fraction Fraction::mult(const Fraction& f) {
	Fraction temp;
	temp.num = (num * f.num);
	temp.den = (den * f.den);
	return temp;
}

Fraction Fraction::div(const Fraction& f) {
	Fraction temp;
	temp.num = (num * f.den);
	temp.den = (den * f.num);
	return temp;
}

void Fraction::printFraction() {
	// handle a denominator of 0 in a more eloquent way
	if (den == 0) {
		cout << "Undefined" << endl;
		return;
	}
	// reduce to 0 if numerator is 0 for a cleaner output
	if (num == 0) {
		cout << "0" << endl;
		return;
	}
	cout << num << "/" << den << endl;
}