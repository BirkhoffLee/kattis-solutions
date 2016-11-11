#include <iostream>

int main () {
	int a, b, start, end;

	std::cin >> a >> b;

	if (a > b) {
		start = b + 1;
		end = a + 1;
	} else {
		start = a + 1;
		end = b + 1;
	}

	for (int i = start; i < end + 1; i ++) {
		std::cout << i << std::endl;
	}

	return 0;
}