#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    scanf("%d %d %d %d %d%*c", &a, &b, &c, &d, &e);

    printf("%d\n", a > b);
    printf("%d\n", a > c);
    printf("%d\n", a > d);
    printf("%d\n", a > e);

    return 0;
}