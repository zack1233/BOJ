#include <iostream>

int main() {

	int len[4];
	int sum = 0;

	for (int i = 0;i < 4;i++) {
		std::cin >> len[i];
	}

	for (int i = 0;i < 4;i++) {
		sum += len[i];
	}

	if (59 < sum && sum< 3600) {
		std::cout << sum / 60<<std::endl;
		std::cout << sum % 60;
	}


	return 0;
}