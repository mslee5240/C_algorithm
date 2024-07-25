#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        for (int j = ; j > 0; --j) {
            printf("*");
        }
        for (int j = i; j > i*2; --j) {
            printf(" ");
        }
        for (int j = i; j > 0; --j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}