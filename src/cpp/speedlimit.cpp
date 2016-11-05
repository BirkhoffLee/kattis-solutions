#include <iostream>

using namespace std;

int main() {
	int count, firstRun = 1;
	cin >> count;

	while (count != -1) {
		int total = 0, previousHour = 0;

		if (firstRun == 0) {
			cin >> count;
		} else {
			firstRun = 0;
		}

		if (count == -1) {
			/* Yeah I know there's likely some logic problems but this work so I won't rewrite the loop */
			break;
		}

		for (int i = 0; i < count; i++) {
			int speed, hour;

			cin >> speed;
			cin >> hour;

			total += speed * (hour - previousHour);

			previousHour = hour;
		}

		cout << total << " miles" << endl;
	}

	return 0;
}