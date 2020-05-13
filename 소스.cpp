#include <iostream>

int main() {

	int R1, S;

	std::cin >> R1 >> S;
	int ans;
	if (R1 >= -1000 && R1 <= 1000 && S >= -1000 && S <= 1000) {
		ans = 2 * S - R1;
		std::cout << ans;
	}


	return 0;
}