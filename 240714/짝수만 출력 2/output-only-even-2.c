#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d%*c", &b, &a);

    while (b >= a) {
        printf("%d ", b);
        b -= 2;
    }

    return 0;
}