#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d%*c", &a, &b);

    printf("%d.", a / b);

    a %= b;

    for (int i = 0; i < 20; i++) {
        a *= 10;
        printf("%d", a / b);

        a %= b;

    }
    return 0;
}