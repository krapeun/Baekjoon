// 1110 더하기 사이클

#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int cycle = 0;
	int M = N;

	while (1) {
		cycle++;
		int a = 0, b;
		if (M > 9) a = M / 10;
		b = M - a * 10;

		if (a + b > 9) M = b * 10 + (a + b - (a + b) / 10 * 10);
		else M = b * 10 + a + b;

		if (M == N) break;	// 같아지면 종료
	}

	printf("%d\n", cycle);

	return 0;
}
