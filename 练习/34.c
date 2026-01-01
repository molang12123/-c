#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int radius = 100;
    if (x * x + y * y <= radius * radius) {
        printf("inside\n");
    }
    else {
        printf("outside\n");
    }

    return 0;
}
