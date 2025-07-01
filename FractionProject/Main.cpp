/*
Main.cpp
Zoey Anderson
Guided Practice 1 - Creating A Class
6/11/2025
*/

#include <iostream>

#include "Fraction.h"

using namespace std;

int main() {

	Fraction f1, f2, f3;

	// tests 1

	f1.setFraction(1, 4);
	f2.setFraction(3, 4);

	f3 = f1.add(f2);
	f3.printFraction();

	f3 = f2.sub(f1);
	f3.printFraction();

	f3 = f1.mult(f2);
	f3.printFraction();

	f3 = f1.div(f2);
	f3.printFraction();

	// tests 2

	f1.setFraction(3, 8);
	f2.setFraction(1, 9);

	f3 = f1.add(f2);
	f3.printFraction();

	f3 = f2.sub(f1);
	f3.printFraction();

	f3 = f1.mult(f2);
	f3.printFraction();

	f3 = f1.div(f2);
	f3.printFraction();

	// 0 denominator test

	f1.setFraction(1, 4);
	f2.setFraction(1, 0);

	f3 = f1.add(f2);
	f3.printFraction();

	f3 = f2.sub(f1);
	f3.printFraction();

	f3 = f1.mult(f2);
	f3.printFraction();

	f3 = f1.div(f2);
	f3.printFraction();

	return 0;
}