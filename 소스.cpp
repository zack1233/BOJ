#include <iostream>
using namespace std;

int main() {
	
	int N;
	
	cin >> N;
	
	if (1 <= N && N <= 2017) {
		cout << N * (N - 1);		
	}

	return 0;
}