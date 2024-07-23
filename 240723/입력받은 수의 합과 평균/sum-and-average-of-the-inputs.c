#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int nInput = 0, sum_val = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &nInput);
        sum_val += nInput;
    }

    printf("%d %.1f", sum_val, (double)sum_val / n);

    return 0;
}