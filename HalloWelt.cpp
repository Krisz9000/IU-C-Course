// HalloWelt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
}

int main()
{
    std::cout << "Hello World!\n";
	consoleInput::input();

	// TODO Implement calculateBaseOperations
	// TODO Implement Manual Input
	int n1 = 1;
	int n2 = 2;

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
