// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int Add(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}

void Product(int a, int b) {
	cout << "Product of a and b: " << a * b;
}

double Quotient(double a, double b) {
	return a / b;
}

void Calculator(int a, int b, char c) {
	switch (c)
	{
	case '+':
		cout << "Addition of a and b: " << Add(a, b);
		break;
	case '-':
		cout << "Subtraction of a and b: " << Minus(a, b);
		break;
	case '*':
		Product(a, b);
		break;
	case '/':
		cout << "Division of a and b: " << Quotient(a, b);
		break;
	default:
		cout << "Invalid operator was provided.";
		break;
	}
}

int main() {
	while (true) {
		std::cout << "Type 2 numbers." << "\n";
		int a, b;
		char c;
		cin >> a;
		cin >> b;
		cout << "Type operator.";
		cin >> c;
		Calculator(a, b, c);
	}
	return 0;
}


