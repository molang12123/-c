#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num;
    int max = -2147483648; // 初始化為int最小值

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("%d\n", max);

    return 0;
}
