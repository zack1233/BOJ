#include <iostream>

int main() {

	int A;
	int B;

	std::cin >> A;
	std::cin >> B;

	int sum;

	if (0 < A && A < 10 && 0 < B && B < 10) {
		sum = A + B;
		std::cout << sum;
	}

	
	return 0;

}