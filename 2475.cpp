#include <iostream>
#include <cmath>
int main(){

	int arr[5];
	int sum=0;

	for (int i = 0;i < 5;i++) {
		std::cin >> arr[i];
		if (0 <= arr[i] && arr[i] <= 9) {
			sum += pow(arr[i], 2);
		}
	}

	std::cout << sum % 10;


	return 0;

}
