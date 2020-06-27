#include <iostream>
using namespace std;

int main() {

	int N, M, K;

	cin >> N >> M >> K;

	if (1 <= N && N <= 30000 &&
		1 <= M && M <= 30000 &&
		0 <= K && K <= N * M - 1) {
		cout << K / M <<" "<< K % M;
	}


	return 0;
}