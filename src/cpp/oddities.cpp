#include <iostream>
using namespace std;

int main() {
    int count;

    cin >> count;

    for (int i = 0; i < count; i++) {
        int n;

        cin >> n;

        if (n % 2 == 0) {
            cout << n << " is even" << endl;
        } else {
            cout << n << " is odd" << endl;
        }
    }

    return 0;
}