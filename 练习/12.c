#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int k = 0; k < n; k++) {
        int i;
        scanf("%d", &i);

        if (i > 31) {
            printf("Value of more than 31\n");
        }
        else {
            unsigned int result = 1U << i;
            printf("%u\n", result);
        }
    }

    return 0;
}
