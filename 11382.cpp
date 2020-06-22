#include <iostream>
using namespace std;

int main() {

	long long A, B, C;
	cin >> A >> B >> C;

	if (1 <= A && A <= 1000000000000 &&
		1 <= B && B <= 1000000000000 &&
		1 <= C && C <= 1000000000000) {
		cout << A + B + C;
	}



	return 0;
}
