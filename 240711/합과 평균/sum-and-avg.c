#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;

    scanf("%d %d%*c", &a, &b);

    printf("%d %.1lf\n", a + b, (double)(a + b) / 2);

    return 0;
}