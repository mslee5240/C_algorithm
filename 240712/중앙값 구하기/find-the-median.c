#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d%*c", &a, &b, &c);

    if (a >= b && a >= c) {
        if (b >= c) {
            printf("%d\n", b);
        }
        else {
            printf("%d\n", c);
        }
    }
    else if (b >= a && b >= c) {
        if (a >= c) {
            printf("%d\n", a);
        }
        else {
            printf("%d\n", c);
        }
    }
    else {
        if (a >= b) {
            printf("%d\n", a);
        }
        else {
            printf("%d\n", b);
        }
    }
    return 0;
}