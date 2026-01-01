#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);
    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("母音\n");
        }
        else {
            printf("子音\n");
        }
    }
    else {
        printf("不是英文字母\n");
    }

    return 0;
}
