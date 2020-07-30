// 20438 별 찍기
// 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	// 범위 제한
	if (N < 1) N = 1;
	else if (N > 100) N = 100;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
