// 2562 최댓값

#include <iostream>
using namespace std;

int main() {
	int A[9] = {};
	
	int max = 0;
	int max_idx = 0;

	for (int i = 0; i <= 8; i++) {
		cin >> A[i];
		if (max < A[i]) {
			max = A[i];
			max_idx = i + 1;
		}
	}

	cout << max << endl << max_idx << endl;

	return 0;
}
