#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int NT10 = N / 10;
	N %= 10;

	int NT5 = N / 5;
	N %= 5;

	int NT1 = N;

	printf("NT10=%d\n", NT10);
	printf("NT5=%d\n", NT5);
	printf("NT1=%d\n", NT1);

	return 0;
}
