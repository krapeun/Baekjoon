// 2588 곱셈

#include <stdio.h>

int main() {
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);

	int a, b, c;
	a = B / 100;
	b = (B - a * 100) / 10;
	c = B - a * 100 - b * 10;

	printf("%d\n", A*c);	// (3)
	printf("%d\n", A*b);	// (4)
	printf("%d\n", A*a);	// (5)

	int sum;
	sum = A*c + 10 * A*b + 100 * A*a;
	printf("%d\n", sum);	// (6)

	return 0;
}
