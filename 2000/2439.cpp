// 2439 별 찍기 - 2
// 오른쪽을 기준으로 정렬한 별을 출력하시오.

#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	// 범위 제한
	if (N < 1) N = 1;
	else if (N > 100) N = 100;

	for (int i = 1; i <= N; i++) {
		for (int j = i; j < N; j++)
			printf(" ");
		for(int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
