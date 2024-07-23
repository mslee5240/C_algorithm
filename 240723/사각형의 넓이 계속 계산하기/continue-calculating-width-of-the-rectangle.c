#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    char c = 0;

    while (1) {
        scanf("%d %d %c", &a, &b, &c);
        printf("%d\n", a * b);
        if (c == 'C') {
            break;
        }
    }

    return 0;
}