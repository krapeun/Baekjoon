// 2884 알람시계
// 시간 뺄셈 문제

#include <stdio.h>

int main() {
	int H, M;
	scanf("%d %d", &H, &M);

	// 범위 제한
	if (H < 0) H = 0;
	else if (H > 23) H = 23;
	if (M < 0) M = 0;
	else if (M > 59) M = 59;

	// 시간 조정
	if (M < 45) {
		if (H == 0) H = 23;
		else H--;
		M = 60 - (45 - M);
	}
	else M = M - 45;
	printf("%d %d\n", H, M);

	return 0;
}
