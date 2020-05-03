#include <iostream>

int main() {
	unsigned int i;
	unsigned int j;
	
	std::cin >> i >> j;
	if (!(i == 0 || j == 0)) {
		if (1 < (i + j) && (i + j) < 20) {
			std::cout << i + j;
		}
	}

	return 0;
}
