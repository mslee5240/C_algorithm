#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d%*c", &a, &b);

    while (a <= b) {
        printf("%d ", a);
        if (a % 2 == 0) {
            a += 3;
        }
        else {
            a *= 2;
        }
    }
    return 0;
}