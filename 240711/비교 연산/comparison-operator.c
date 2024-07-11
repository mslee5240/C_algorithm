#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0 , b = 0;
    scanf("%d %d%*c", &a, &b);

    printf("%d\n", a >= b);
    printf("%d\n", a > b);
    printf("%d\n", a <= b);
    printf("%d\n", a < b);
    printf("%d\n", a == b);
    printf("%d\n", a != b);

    return 0;
}