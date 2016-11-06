#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
    Returns amount of distinct cities of the trip
 */
int loopTrips (int citiesOfTheTrip) {
    std::vector<std::string> citiesArray;

    for (int i = 0; i < citiesOfTheTrip; i ++) {
        std::string city;
        std::cin >> city;

        if (std::find(citiesArray.begin(), citiesArray.end(), city) == citiesArray.end()) {
            citiesArray.push_back(city);
        }
    }

    return citiesArray.size();
}

int main () {
    int trips;

    std::cin >> trips;

    for (int i = 0; i < trips; i++) {
        int citiesOfTheTrip;
        std::cin >> citiesOfTheTrip;
        std::cout << loopTrips(citiesOfTheTrip) << std::endl;
    }

    return 0;
}