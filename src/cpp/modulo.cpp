#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main() {
	std::vector<int> remainders;

	for (int i = 0; i < 10; ++i) {
		int number, res;
		std::cin >> number;
		res = number % 42;

		if (std::find(remainders.begin(), remainders.end(), res) == remainders.end()) {
			remainders.push_back(res);
		}
	}

	std::cout << remainders.size() << std::endl;

	return 0;
}