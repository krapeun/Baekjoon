// # 2750 수 정렬하기

#include <iostream>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	int *number = new int[N];

	for (int i = 0; i < N; i++)
		cin >> number[i];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (number[j] > number[j + 1]) {	// SWAP
				int temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
		cout << number[i] << endl;

	return 0;
}
