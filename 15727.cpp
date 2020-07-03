#include <iostream>
using namespace std;

int main() {
	
	int L;

	cin >> L;

	if (1 <= L && L <= 1000000) {
		if (!(L%5)) {
			cout << L / 5;
		}
		else {
			cout << L / 5 + 1;
		}
	}


	return 0;
}
