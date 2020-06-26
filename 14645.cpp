#include <iostream>
#include <vector>
using namespace std;

int main() {

	int N;
	int K;
	
	cin >> N >> K;
	vector<vector<int>> arr(N,vector<int>(2));

	for (int i = 0;i < N;i++) {
		cin >> arr[i][0] >> arr[i][1];
	}

	cout << "ºñ¿ÍÀÌ";

	return 0;
}
