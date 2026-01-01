#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    float arr[50];

    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%.1lf\n", arr[i] * arr[i]);
    }

    return 0;
}
