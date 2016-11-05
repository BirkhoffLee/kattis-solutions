#include <iostream>

using namespace std;

int main() {
    int H, M;

    cin >> H >> M;

    if (M < 45) {
        H--;

        if (H < 0) {
            H += 24;
        }

        M += 60;
    }
    
    M -= 45;

    cout << H << " " << M << endl;

    return 0;
}