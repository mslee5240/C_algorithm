#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char chArr[6] = { 'L', 'E', 'B', 'R', 'O', 'S' };

    char ch = 0;
    scanf("%c", &ch);

    for (int i = 0; i < 6; ++i) {
        if (chArr[i] == ch) {
            printf("%d", i);
            break;
        }
        else {
            printf("None");
        }
    }

    return 0;
}