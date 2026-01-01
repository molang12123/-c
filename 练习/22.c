#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]) {

	int num = 0;
	scanf("%d", &num);
	int ge = num % 10;
	int shi = (num % 100) / 10;
	int bai = (num % 1000) / 100;
	int qian = (num % 10000) / 1000;
	int wan = (num / 10000);
	for (int i = 0; i < wan; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < qian; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < bai; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < shi; i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < ge; i++) {
		printf("*");
	}

	return 0;
}