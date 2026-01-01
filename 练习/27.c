#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0;

    for (int i = 1; i <= N; i++) {
        if (i % 6 == 0 && i % 12 != 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);
    return 0;
}
