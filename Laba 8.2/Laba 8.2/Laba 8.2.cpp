#include <iostream>
#include <string>

size_t maxCountSpaces(const std::string& s) {

	size_t current = 0;
	size_t max = 0;

	for (char c : s) {
		if (c == ' ') {
			current++;
		}
		else {
			if (current > max) {
				max = current;
			}
			current = 0;
		}
	}
	return max;
}

int main()
{
	std::string str;
	std::cout << "Enter string:" << std::endl;
	std::getline(std::cin, str);

	int result = maxCountSpaces(str);
	std::cout << "Max count spaces: " << result << std::endl;

	return 0;
}
