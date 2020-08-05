// 1065 한수

#include <stdio.h>

int num(int N) {
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		int a = 0, b = 0, c = 0;
		if (i < 10) sum++;	// 항상 등차수열
		else if (i < 100) sum++;	// 항상 등차수열
		else {
			a = i / 100;
			b = (i - a * 100) / 10;
			c = i - a * 100 - b * 10;
			// 등차수열인지 판단
			if (a - b == b - c) sum++;
		}
	}
	return sum;
}

int main() {
	int N;
	scanf("%d", &N);
	printf("%d\n", num(N));

	return 0;
}
