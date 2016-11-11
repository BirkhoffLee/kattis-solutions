#include <iostream>

int main () {
	long a, b;

	while (std::cin >> a >> b) {
	    std::cout << std::abs(a - b) << std::endl;
	}

	return 0;
}