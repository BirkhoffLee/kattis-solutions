#include <iostream>

using namespace std;

int main() {
    int stones;

    cin >> stones;

    if (stones % 2 == 1) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }

    return 0;
}