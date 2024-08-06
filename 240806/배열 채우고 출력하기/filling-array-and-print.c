#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char chArr[10] = { 0 };

    for (int i = 0; i < 10; ++i) {
        scanf("%c%*c", &chArr[i]);
    }

    for (int i = 0; i < 10; ++i) {
        printf("%c", chArr[9 - i]);
    }

    return 0;
}