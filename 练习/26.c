#include<stdio.h>
#include<math.h>
int main() {
	int x1, y1;
	int x2, y2;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	float d = sqrt((float)(x1 - x2) * (float)(x1 - x2) + (float)(y1 - y2) * (float)(y1 - y2));
	printf("%.2f", d);
	return 0;
}