// 14681 사분면 고르기
// 점이 어느 사분면에 있는지 알아내는 문제

#include <stdio.h>

int main() {
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	// 범위 제한
	if (x < -1000) x = -1000;
	else if (x > 1000) x = 1000;
	if (y < -1000) y = -1000;
	else if (y > 1000) y = 1000;

	// 사분면 판단
	if (x > 0) {
		if (y > 0) printf("1\n");
		else printf("4\n");
	}
	else {
		if (y > 0) printf("2\n");
		else printf("3\n");
	}

	return 0;
}
