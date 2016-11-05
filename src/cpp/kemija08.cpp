#include <iostream>
#include <string>

void replaceAll(std::string& source, const std::string& from, const std::string& to) {
    std::string newString;
    newString.reserve(source.length());

    std::string::size_type lastPos = 0;
    std::string::size_type findPos;

    while (std::string::npos != (findPos = source.find(from, lastPos))) {
        newString.append(source, lastPos, findPos - lastPos);
        newString += to;
        lastPos = findPos + from.length();
    }

    newString += source.substr(lastPos);
    source.swap(newString);
}

int main() {
	std::string encoded;
	getline(std::cin, encoded);

	replaceAll(encoded, "apa", "a");
	replaceAll(encoded, "epe", "e");
	replaceAll(encoded, "ipi", "i");
	replaceAll(encoded, "opo", "o");
	replaceAll(encoded, "upu", "u");

	std::cout << encoded << std::endl;

    return 0;
}