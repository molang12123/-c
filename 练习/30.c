#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;

    while (scanf("%d", &arr[n]) == 1 && n < 100) {
        n++;
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");

    return 0;
}
