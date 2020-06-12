#include <iostream>

using namespace std;

int main() {

	int A, B;

	cin >> A >> B;

	if (1 <= A && 1 <= B && A <= 10000 && B <= 10000) {
		cout << A + B << endl;
		cout << A - B << endl;
		cout << A * B << endl;
		cout << A / B << endl;
		cout << A % B;

	}
	



	return 0;
}
