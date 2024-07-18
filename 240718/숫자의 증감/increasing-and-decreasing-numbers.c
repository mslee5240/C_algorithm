#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c = 0;
    int n = 0;

    scanf("%c %d%*c", &c, &n);

    if (c == 'A') {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    }

    if (c == 'D') {
        for (int i = n; i >= 1; i--) {
            printf("%d ", i);
        }
    }
    return 0;
}