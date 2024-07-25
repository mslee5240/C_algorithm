#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("  ");
        }
        for (int j = 0; j < (n*2) - (i*2) - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n-i-2; ++j) {
            printf("  ");
        }
        for (int j = 0; j < 3 + (2 * i); j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}