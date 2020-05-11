#include <iostream>

int main() {

	int A;
	int I;

	std::cin >> A >> I;

	int ans;

	if (1 <= A && A <= 100 && 1 <= I && I <= 100) {
		ans = A * (I - 1) + 1;
		std::cout << ans;
	}

	return 0;
}