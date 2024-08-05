#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; ++i) {
        int divisor_cnt = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                ++divisor_cnt;
            }
        }
        
        if (divisor_cnt == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}