#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    int maxPrime = -1; 
    for (int i = n; i >= 2; i--) {
        if (isPrime(i)) {
            maxPrime = i;
            break;
        }
    }

    if (maxPrime == -1) {
        printf("没有质数\n", n);
    }
    else {
        printf("%d\n",maxPrime);
    }

    return 0;
}
