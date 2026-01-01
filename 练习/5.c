#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    double* W = malloc(n * sizeof(double));

    for (int i = 0; i < n; i++) {
        scanf("%lf", &W[i]);

        double result = W[i] * W[i];
        result = round(result * 10) / 10;

        printf("%.1lf\n", result);
    }

    free(W);
    return 0;
}
