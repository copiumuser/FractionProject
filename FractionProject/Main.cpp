/*
Main.cpp
Zoey Anderson
Guided Practice 6 - Static Members
7/2/2025
*/

#include <iostream>

#include "Fraction.h"

using namespace std;

int main() {
	Fraction* f1, *f2, *f3, *f4;
	f1 = new Fraction;
	f2 = new Fraction;
	f3 = new Fraction;
	f4 = new Fraction;

	cout << Fraction::getCurrentCount() << endl;

	delete f3;
	delete f4;

	cout << Fraction::getCurrentCount() << endl;

	return 0;
}