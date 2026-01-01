int main(int argc, char* argv[]) {

	int num = 0;
	scanf("%d", &num);
	int ge = num % 10;
	int shi = (num % 100) / 10;
	int bai = (num % 1000) / 100;
	int qian = num / 1000;
	printf("%d,%d,%d,%d", ge, shi, bai, qian);



	return 0;
}