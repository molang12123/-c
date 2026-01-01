#include<stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);

	int* a = malloc(n * sizeof(int));
	int* b = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a[i], &b[i]);
		printf("%d\n", a[i] + b[i]);
	}
	free(a);
	free(b);
	return 0;
}