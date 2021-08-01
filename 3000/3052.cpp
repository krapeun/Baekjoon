// #3052 나머지

#include <iostream>
using namespace std;

int main() {
	int n[10] = {};
	int ans[42] = { 0, };
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		int a = 0;
		cin >> a;
		ans[a % 42]++;
	}

	for (int i = 0; i < 42; i++)
		if (ans[i] != 0)	// 값이 존재한다면
			sum++;

	cout << sum << endl;

	return 0;
}
