// HalloWelt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
namespace consoleInput {
	void input() {
		std::string input;
		std::cout << "Please enter something: ";
		std::cin >> input;
		std::cout << "Your input was: " << input << "\n";
	}
}

namespace calculateBaseOperations {
	void calculate(int n1, int n2) {
		int sum = n1 + n2;
		int diff = n1 - n2;
		int prod = n1 * n2;
		int quot = n1 / n2;
		int mod = n1 % n2;

		std::cout << "Sum of " << n1 << " and " << n2 << " is: " << sum << "\n";
		std::cout << "Difference of " << n1 << " and " << n2 << " is: " << diff << "\n";
		std::cout << "Product of " << n1 << " and " << n2 << " is: " << prod << "\n";
		std::cout << "Quotiance of " << n1 << " and " << n2 << " is: " << quot << "\n";
		std::cout << "Modulo of " << n1 << " and " << n2 << " is: " << mod << "\n";
	}

	bool isDividableBy2(int n) {
		return (n % 2 == 0 ? true : false);
	}

	bool isDividableBy3(int n) {
		return (n % 3 == 0 ? true : false);
	}

	void dividableBy2or3() {
		for (int i = 1; i < 11; ++i) {
			switch (isDividableBy2(i)) {
			case true:
				std::cout << i << " is dividable by 2 ";
				break;
			case false:
				std::cout << i << " is not dividable by 2 ";
				break;
			}
			switch (isDividableBy3(i)) {
			case true:
				cout << "and is dividable by 3";
				break;
			case false:
				cout << "and is not dividable by 3";
				break;
			}
			std::cout << "\n";
		}
	}
}
namespace loops {
	void listingWithLoops() {
		int j(1);
		int k(1);
		int l(1);
		for (int i = 1; i < 6; ++i) std::cout << i << " ";
		std::cout << "\n";
		while (j < 6) {
			std::cout << j << " ";
			++j;
		}
		std::cout << "\n";
		do {
			std::cout << k << " ";
			++k;
		} while (k < 6);
		std::cout << "\n";
	gotoLoop:
		if (l < 6) {
			std::cout << l << " ";
			++l;
			goto gotoLoop;
		}
		cout << "\n";
	}
}

int main()
{
	do {
		int n1(5);
		int n2(10);
		cout << "Please choose program mode, enter the number:\n";
		cout << "0. Exit\n";
		cout << "1. Calculate Base Operations\n";
		cout << "2. Manual Input\n";
		cout << "3. Hello World\n";
		cout << "4. Loops\n";
		cout << "5. Dividable by 2 or 3\n";
		int mode;
		cin >> mode;
		switch (mode) {
		case 0:
			cout << "Exiting program...\n";
			return 0;
		case 1:
			calculateBaseOperations::calculate(n1, n2);
			break;
		case 2:
			consoleInput::input();
			break;
		case 3:
			std::cout << "Hello World!\n";
			break;
		case 4:
			loops::listingWithLoops();
			break;
		case 5:
			calculateBaseOperations::dividableBy2or3();
			break;
		default:
			cout << "Invalid mode has been selected, please try again!\n";
		}
	} while (true);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
