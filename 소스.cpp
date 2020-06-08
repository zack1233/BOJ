#include <iostream>

int main() {

	int num[3]; //num[0]=A, num[1]=B, num[2]=C
	int N;

	for (int i = 0;i < 3;i++) {
		std::cin >> N;
		if (2 <= N && N <= 10000) {
			num[i] = N;
		}
	}

	std::cout << (num[0] + num[1]) % num[2] << std::endl; //(A+B)%C
	std::cout << ((num[0] % num[2]) + (num[1] % num[2])) % num[2] << std::endl; //((A%C) + (B%C))%C
	std::cout << (num[0] * num[1]) % num[2] << std::endl; //(A*B)%C
	std::cout<< ((num[0] % num[2]) * (num[1] % num[2])) % num[2]; //((A%C) ¡¿ (B%C))%C

	return 0;

}