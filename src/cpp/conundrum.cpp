#include <iostream>
#include <string>

int main() {
    std::string plainText;

    std::cin >> plainText;
    
    /*
        P E R P E R P E R P
        0 1 2 3 4 5 6 7 8 9

        P : 0, 3, 6, 9
        E : 1, 4, 7
        R : 2, 5, 8
     */

    int numOfDays = 0;

    for (int i = 0; i < plainText.size(); i++) {
        if (i == 0 || i % 3 == 0) {
            // P
            
            if (plainText[i] != 80) {
                ++numOfDays;
            }
        } else if (i == 1 || (i - 1) % 3 == 0) {
            // E
            
            if (plainText[i] != 69) {
                ++numOfDays;
            }
        } else if (i == 2|| (i - 2) % 3 == 0) {
            // R
            
            if (plainText[i] != 82) {
                ++numOfDays;
            }
        }
    }

    std::cout << numOfDays << std::endl;

    return 0;
}