// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int someFunc(int x, int y) {
	return x + (x*y);
}

int main() {
	cout << "Hello" << ' ' << "World" << "\n";
	std::cout << "What is 7 + 2?" << "\n";
	int c = someFunc(5, 6);
	int x;
	cin >> x;

	return 0;
}


