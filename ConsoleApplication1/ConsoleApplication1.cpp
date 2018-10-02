// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void Product(int a, int b) {
	cout << "Product of a and b: " << a * b;
}

double Quotient(double a, double b) {
	return a / b;
}

int main() {
	cout << "Hello" << ' ' << "World" << "\n";
	std::cout << "Type 2 numbers, i'll calculate and display the sum and product." << "\n";
	int a, b;
	cin >> a;
	cin >> b;
	Product(a, b);
	cout << "\nQuotient of a and b: " << Quotient(a, b);
	cin >> b;

	return 0;
}


