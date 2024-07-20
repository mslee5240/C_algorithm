#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, sum_2 = 0, sum_3 = 0, sum_12 = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 12 == 0) {
            sum_12++;
        }
        else if (i % 3 == 0) {
            sum_3++;
        }
        else if (i % 2 == 0) {
            sum_2++;
        }
    }

    printf("%d %d %d", sum_2, sum_3, sum_12);
    return 0;
}