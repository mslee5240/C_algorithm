#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d%*c", &a, &b);

    if (a % 2 == 0) {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }

    if (b % 2 == 0) {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }

    return 0;
}