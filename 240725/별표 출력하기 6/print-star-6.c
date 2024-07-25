#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; ++i) {
        int stars, spaces;

        if (i < n) {
            // 위쪽 절반
            spaces = i;                   // 공백의 개수
            stars = (n * 2) - (i * 2) - 1; // 별의 개수
        } else {
            // 아래쪽 절반
            spaces = 2 * n - i - 2;       // 공백의 개수
            stars = (i - n + 1) * 2 + 1;  // 별의 개수
        }

        // 공백 출력
        for (int j = 0; j < spaces; ++j) {
            printf("  ");
        }

        // 별 출력
        for (int j = 0; j < stars; ++j) {
            printf("* ");
        }
        
        // 줄 바꿈
        printf("\n");
    }
    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < i; ++j) {
    //         printf("  ");
    //     }
    //     for (int j = 0; j < (n*2) - (i*2) - 1; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // for (int i = 0; i < n - 1; ++i) {
    //     for (int j = 0; j < n-i-2; ++j) {
    //         printf("  ");
    //     }
    //     for (int j = 0; j < 3 + (2 * i); j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    return 0;
}