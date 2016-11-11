#include <iostream>

int main () {
	int a, b, c, d, e, f, x, y;

	std::cin >> a >> b; // 5 5
	std::cin >> c >> d; // 5 7
	std::cin >> e >> f; // 7 5

	if (a == c) { x = e; }

	if (a == e) { x = c; }

	if (c == e) { x = a; }

	if (b == d) { y = f; }

	if (b == f) { y = d; }

	if (d == f) { y = b; }

	std::cout << x << " " << y << std::endl;

	return 0;
}