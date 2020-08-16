// 2753 윤년

#include <stdio.h>

int main() {
	int year;
	scanf("%d", &year);

	// 범위 제한
	if (year < 1) year = 1;
	else if (year > 4000) year = 4000;

	// 윤년인지 판단
	if (year % 4 == 0) {	// 4의 배수일 때
		if (year % 100 != 0) printf("1\n");	// 100의 배수가 아닐 때
		else {
			if (year % 400 == 0) printf("1\n");	// 400의 배수일 때
			else printf("0\n");
		}
	}
	else printf("0\n");

	return 0;
}
