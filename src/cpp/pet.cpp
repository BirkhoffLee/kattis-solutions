#include <iostream>
#include <iterator>
#include <algorithm>

int main() {
    int total[5];
    int* max;

    for (int i = 0; i < 5; i++) {
        int score[4];

        for (int j = 0; j < 4; j++) {
            std::cin >> score[j];
        }

        total[i] = 0;

        for (int k = 0; k < 4; k++) {
            total[i] += score[k];
        }
    }

    std::cout << total[0] << std::endl;
    std::cout << total[1] << std::endl;
    std::cout << total[2] << std::endl;
    std::cout << total[3] << std::endl;
    std::cout << total[4] << std::endl;
    max = std::max_element(total, total + 5);

    std::cout << std::distance(total, max) + 1 << " " << *max << std::endl;

    return 0;
}

