#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("NO\n");
        return 0;
    }

    int isPrime = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
