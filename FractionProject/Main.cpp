/*
Main.cpp
Zoey Anderson
Guided Practice 5 - Dynamic Memory Allocation
7/1/2025
*/

#include <iostream>

#include "Fraction.h"

using namespace std;

int main() {
	Fraction f1, f2, f3;

	cin >> f1;
	cin >> f2;

	cout << f1 << endl;
	f2 = f1;
	f3 = f1 + f2;
	cout << f3 << endl;

	return 0;
}