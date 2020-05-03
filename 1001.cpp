#include <iostream>

int main() {
	int i;
	int j;

	std::cin >> i >> j;

	if ((i > 0 && j > 0 && i < 10 && j < 10)) {
		if (-9 < i - j < 9) {
			std::cout << i - j;
		}
	}
	return 0;
}
