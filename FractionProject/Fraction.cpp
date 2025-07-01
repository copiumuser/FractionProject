/*
Fraction.cpp
Zoey Anderson
Guided Practice 2 - Constructors
6/17/2025
*/

#include <iostream>
#include <string>

#include "Fraction.h"

using namespace std;

Fraction::Fraction() {
	this->setFraction(1, 1);
}

Fraction::Fraction(int n, int d) {
	this->setFraction(n, d);
}

Fraction::Fraction(string frac) {
	// convert to int a substring of frac from the 0 position to the first / 
	int n = stoi(frac.substr(0, frac.find_first_of('/')));
	// convert to int a substring of frac from the first / position + 1 to the end of frac
	int d = stoi(frac.substr(frac.find_first_of('/') + 1, frac.length() - (frac.find_first_of('/') - 1)));
	this->setFraction(n, d);
}

void Fraction::setFraction(int n, int d) {
	this->num = n;
	this->den = d;
}

Fraction Fraction::add(const Fraction& f) {
	Fraction temp;
	temp.num = (this->num * f.den) + (f.num * this->den);
	temp.den = (f.den * this->den);
	return temp;
}

Fraction Fraction::sub(const Fraction& f) {
	Fraction temp;
	temp.num = (this->num * f.den) - (f.num * this->den);
	temp.den = (f.den * this->den);
	return temp;
}

Fraction Fraction::mult(const Fraction& f) {
	Fraction temp;
	temp.num = (this->num * f.num);
	temp.den = (this->den * f.den);
	return temp;
}

Fraction Fraction::div(const Fraction& f) {
	Fraction temp;
	temp.num = (this->num * f.den);
	temp.den = (this->den * f.num);
	return temp;
}

void Fraction::printFraction() {
	// handle a denominator of 0 in a more eloquent way
	if (this->den == 0) {
		cout << "Undefined" << endl;
		return;
	}
	// reduce to 0 if numerator is 0 for a cleaner output
	if (this->num == 0) {
		cout << "0" << endl;
		return;
	}
	cout << this->num << "/" << this->den << endl;
}