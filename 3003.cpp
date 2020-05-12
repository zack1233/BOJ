#include <iostream>



int main() {
	
	int chess[6] = { 1,1,2,2,2,8 };
	int piece[6];
	int input;
	for (int i = 0;i < 6;i++) {
		std::cin >> input;
		if (0 <= input && input <= 10) {
			piece[i] = input;
		}
	}
	//int output[6];
	for (int i = 0;i < 6;i++) {
		std::cout<< chess[i] - piece[i]<<" ";
	}


	return 0;
}
