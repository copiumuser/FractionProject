/*
Fraction.cpp
Zoey Anderson
Guided Practice 5 - Dynamic Memory Allocation
7/1/2025
*/

#include <iostream>
#include <string>

#include "Fraction.h"

using namespace std;

void Fraction::setFraction(int n, int d) {
	this->create();
	*this->num = n;
	*this->den = d;
}

Fraction Fraction::add(const Fraction& f) {
	Fraction temp;
	*temp.num = (*this->num * *f.den) + (*f.num * *this->den);
	*temp.den = (*f.den * *this->den);
	return temp;
}

Fraction Fraction::sub(const Fraction& f) {
	Fraction temp;
	*temp.num = (*this->num * *f.den) - (*f.num * *this->den);
	*temp.den = (*f.den * *this->den);
	return temp;
}

Fraction Fraction::mult(const Fraction& f) {
	Fraction temp;
	*temp.num = (*this->num * *f.num);
	*temp.den = (*this->den * *f.den);
	return temp;
}

Fraction Fraction::div(const Fraction& f) {
	Fraction temp;
	*temp.num = (*this->num * *f.den);
	*temp.den = (*this->den * *f.num);
	return temp;
}

void Fraction::printFraction() {
	// handle a denominator of 0 in a more eloquent way
	if (*this->den == 0) {
		cout << "Undefined" << endl;
		return;
	}
	// reduce to 0 if numerator is 0 for a cleaner output
	if (*this->num == 0) {
		cout << "0" << endl;
		return;
	}
	cout << this->getNum() << "/" << this->getDen() << endl;
}

// private functions

void Fraction::create() {
	this->num = new int;
	this->den = new int;
}

// accessors

int Fraction::getNum() const {
	return *this->num;
}

int Fraction::getDen() const {
	return *this->den;
}

// constructors

Fraction::Fraction() {
	this->create();
	this->setFraction(1, 1);
}

Fraction::Fraction(const int n, const int d) {
	this->create();
	this->setFraction(n, d);
}

Fraction::Fraction(const string frac) {
	this->create();
	// convert to int a substring of frac from the 0 position to the first / 
	int n = stoi(frac.substr(0, frac.find_first_of('/')));
	// convert to int a substring of frac from the first / position + 1 to the end of frac
	int d = stoi(frac.substr(frac.find_first_of('/') + 1, frac.length() - (frac.find_first_of('/') - 1)));
	this->setFraction(n, d);
}

Fraction::Fraction(const Fraction& other) {
	create();
	*this->num = *other.num;
	*this->den = *other.den;
}

// operator overloads

Fraction Fraction::operator+(const Fraction& f) {
	return this->add(f);
}

Fraction Fraction::operator-(const Fraction& f) {
	return this->sub(f);
}

Fraction Fraction::operator*(const Fraction& f) {
	return this->mult(f);
}

Fraction Fraction::operator/(const Fraction& f) {
	return this->div(f);
}

Fraction& Fraction::operator=(const Fraction& f) {
	this->setFraction(f.getNum(), f.getDen());
	return *this;
}

std::istream& operator>> (std::istream& input, Fraction& f) {
	std::cout << "Enter a numerator: ";
	std::cin >> *f.num;
	std::cout << "\nEnter a denominator: ";
	std::cin >> *f.den;

	return input;
}

ostream& operator<< (ostream& output, Fraction& f) {
	cout << "Numerator: " << *f.num << "\nDenominator: " << *f.den << endl;
	return output;
}

// destructor

Fraction::~Fraction() {
	delete num;
	delete den;
}