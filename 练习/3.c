#include<stdio.h>

void area(int a, int b, int c) {
	float area = (float)(a + b) * (float)c / 2;
	printf("Trapezoid area:%.1f", area);
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	area(a, b, c);
	return 0;
}
