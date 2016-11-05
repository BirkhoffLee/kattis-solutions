#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int main() {
	int h, v;
	double k;

    std::cin >> h >> v;

    /* cmath's sin() calculates in radians, but kattis wants it in degrees */

    k = sin(v * M_PI / 180.0);
    std::cout << ceil(h / k) << std::endl;
    return 0;
}