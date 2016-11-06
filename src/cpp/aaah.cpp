#include <iostream>
#include <string>

int main() {
    std::string ableToSay, doctorsOrder;

    std::cin >> ableToSay >> doctorsOrder;

    if (doctorsOrder.length() > ableToSay.length()) {
        std::cout << "no" << std::endl;
    } else {
        std::cout << "go" << std::endl;
    }

    return 0;
}