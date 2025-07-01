/*
Main.cpp
Zoey Anderson
Guided Practice 2 - Constructors
6/17/2025
*/

#include <iostream>

#include "Fraction.h"

using namespace std;

int main() {

	Fraction f1, f2(3, 16), f3("3/14");

	f1.printFraction();
	f2.printFraction();
	f3.printFraction();

	return 0;
}