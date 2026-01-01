#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int j = 0; j < n; j++) {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b) { int t = a; a = b; b = t; }
        int sum = 0;
        for (int i = a; i <= b; i++) sum += i;
        printf("%d\n", sum);
    }

}
