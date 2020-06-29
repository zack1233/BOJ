#include <iostream>
using namespace std;

int main() {

	int a, b;

	cin >> a >> b;

	if (-100000 <= a && a <= 100000 &&
		-100000 <= b && b <= 100000) {
		cout << a + b;
	}

	
	return 0;

}
