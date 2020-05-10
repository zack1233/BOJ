#include <iostream>
#include <vector>
int main() {

	int L; 
	int P;

	std::cin >> L >> P;

	std::vector<int> L5(5);

	for (int i = 0;i < 5;i++) {
		int num;
		std::cin >> num;
		if (0 < num && num < 1000000) {
			L5[i] = num;
		}
	}

	int mul;
	std::vector<int> abs(5);

	mul = L * P;

	for (int i = 0;i < 5;i++) {
		abs[i]=L5[i]-mul;
	}

	if (L <= 10 && 1<= L && P >= 1 && P <= 1000) {
		for (int i = 0;i < 5;i++) {
			std::cout << abs[i] << " "; 
		}
	}



	return 0;
}