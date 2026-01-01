#include<stdio.h>
#include<stdlib.h>

int main() {
	int* arr = (int*)malloc(3 * sizeof(int));
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	int temp = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j] < arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}
}