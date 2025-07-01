/*
Main.cpp
Zoey Anderson
Guided Practice 3 - Operator Overloading
6/24/2025
*/

#include <iostream>

#include "Fraction.h"

using namespace std;

int main() {

	Fraction f1(1, 4), f2("1/2"), f3;

	cout << "f1: ";
	f1.printFraction();
	cout << "f2: ";
	f2.printFraction();
	cout << "f1 + f2: ";
	f3 = f1 + f2;
	f3.printFraction();
	cout << "f2 - f1: ";
	f3 = f2 - f1;
	f3.printFraction();
	cout << "f1 * f2: ";
	f3 = f1 * f2;
	f3.printFraction();
	cout << "f2 / f1: ";
	f3 = f2 / f1;
	f3.printFraction();
	cout << "f1 = f2\nf1: ";
	f1 = f2;
	f1.printFraction();

	return 0;
}