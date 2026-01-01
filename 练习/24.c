#include <stdio.h>

int main() {
    int type, n = 5;
    int i, j;
    scanf("%d", &type);
    switch (type) {
    case 1:
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++) {
                if (i == n || j == 1 || j == 2 * i - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        break;
    case 2:
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
        break;
    case 3:
        for (i = n; i >= 1; i--) {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
        break;

    default:
        printf("wrong\n");
    }

    return 0;
}
