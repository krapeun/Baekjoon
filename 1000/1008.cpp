// 1008 A/B
// 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	double X;
	X = (double) A / B;
	printf("%.9lf\n", X); // 오차 범위

	return 0;
}
