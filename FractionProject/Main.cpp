/*
Main.cpp
Zoey Anderson
Guided Practice 7 - File IO
7/10/2025
*/

#include <iostream>
#include <fstream>
#include <string>

#include "Fraction.h"

using namespace std;

void writeFraction(int amount);
void readFraction();

int main() {
	srand(static_cast<unsigned int>(time(0)));
	writeFraction(100);
	readFraction();
	return 0;
}

void writeFraction(int amount) {
	ofstream outfile("Numbers.txt");
	if (!outfile) {
		cout << "Unable to open file for writing" << endl;
	}
	for (int i = 0; i < amount; i++) {
		Fraction temp(rand() % 10 + 1, rand() % 10 + 1);
		outfile << temp.getNum() << "/" << temp.getDen() << endl;
	}
	outfile.close();
}

void readFraction() {
	ifstream  infile("Numbers.txt");
	if (!infile) {
		cout << "Unable to open file for reading" << endl;
	}
	string input;
	while (infile >> input) {
		Fraction temp(input);
		cout << temp << endl;
	}
	infile.close();
}