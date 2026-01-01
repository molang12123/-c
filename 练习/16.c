#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	float h = b / 100.0;
	printf("%.2f\n", a / (h * h));


	return 0;
}
