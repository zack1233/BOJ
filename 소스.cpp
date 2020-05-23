#include <iostream>

int main() {

	int n;
	int sum = 0;

	std::cin >> n;

	if (1 <= n && n <= 10000) {
		for (int i = 1;i <= n;i++) {
			sum += i;
		}
	}

	std::cout << sum;

	return 0;
}