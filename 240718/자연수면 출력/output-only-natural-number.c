#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d%*c", &a, &b);

    if (a > 0) {
        for (int i = 0; i < b; i++) {
            printf("%d", a);
        }
    }
    else {
        printf("0");
    }
    return 0;
}