#include <iostream>
#include <cstdlib>

// XXX Very basic addition-calculator.

int main()
{
	std::cout << "First number: ";
	std::cout.flush();

	int a = 0;
	std::cin >> a;

	std::cout << "Second number: ";
	std::cout.flush();

	int b = 0;
	std::cin >> b;

	int sum = a + b;
	std::cout << "Sum of " << a << " + " << b << " = " << sum << '\n';

	return EXIT_SUCCESS;
}
