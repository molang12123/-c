#include<stdio.h>

void tA(int a, int b) {
	float temp = (float)a * (float)b;
	float area = temp / 2;
	printf("Triangle area:%.1f", area);
}
int main() {
	int ld, hi;
	scanf("%d %d", &ld, &hi);
	tA(ld, hi);
	return 0;
}