// # 8393 합

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;

	if (n < 1) n = 1;
	else if (n > 10000) n = 10000;

	for (int i = 1; i <= n; i++)
		sum += i;
	printf("%d\n", sum);

	return 0;
}
