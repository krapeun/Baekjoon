// 10430 나머지
// 네 개의 계산식을 계산하는 문제

#include <stdio.h>

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	// 범위 제한
	if (A < 2) A = 2;
	else if (A > 10000) A = 10000;
	if (B < 2) B = 2;
	else if (B > 10000) B = 10000;
	if (C < 2) C = 2;
	else if (C > 10000) C = 10000;

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}
