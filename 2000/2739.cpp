// 2739 구구단

#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	// 범위 제한
	if (N < 0) N = 1;
	else if (N > 9) N = 9;

	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", N, i, N * i);

	return 0;
}
