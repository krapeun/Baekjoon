// #1978 소수 찾기

#include <iostream>
using namespace std;

int main()
{
	int N = 0;	// N개의 주어진 수
	cin >> N;

	int prime_num = 0;	// 소수의 개수

	for (int i = 0; i < N; i++) {
		int number = 0;
		cin >> number;

		int divisor = 0;	// 약수의 개수

		for (int j = 2; j < number; j++)	// 2 ~ N-1
			if (number%j == 0) divisor++;

		if (divisor == 0 && number != 1)	// 1은 소수가 아님
			prime_num++;
	}

	cout << prime_num << endl;

	return 0;
}
