#include <iostream>
#include <cmath>

int main() {

	int len;
	int a;//�Է°�

	std::cin >> std::hex >> a;

	if (0 <= a && a <= pow(16, 6)) {
		std::cout << a;
	}


	return 0;
}