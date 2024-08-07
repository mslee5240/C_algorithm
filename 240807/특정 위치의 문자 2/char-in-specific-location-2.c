#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char chArr[10] = { 0 };

    for (int i = 0; i < 10; ++i) {
        scanf("%c%*c", &chArr[i]);
    }

    for (int i = 1; i < 8; i += 3) {
        printf("%c ", chArr[i]);
    }

    return 0;
}