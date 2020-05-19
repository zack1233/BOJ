#include <iostream>

int main() {

	int score[5];
	int a;
	for (int i = 0;i < 5;i++) {
		std::cin >> a;
		if (a >= 0 && a <= 100) {
			score[i] = a;
		}
		else {
			return 0;
		}
	}

	int sum=0;
	for (int i = 0;i < 5;i++) {
		sum += score[i];
	}

	std::cout << sum;



	return 0;
}
