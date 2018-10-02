// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	cout << "Hello" << ' ' << "World" << "\n";
	std::cout << "Type 2 numbers, i'll calculate and display the sum and product." << "\n";
	int a, b;
	cin >> a;
	cin >> b;
	cout << "Sum of a and b: " << a + b << "\n" << "Product of a and b: " << a * b;
	cin >> a;

	return 0;
}


