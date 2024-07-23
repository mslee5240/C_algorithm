#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int sum_val = 0, cnt = 0;

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum_val += i;
            cnt++;
        }
    }

    printf("%d %.1f", sum_val, sum_val / (double)cnt);
    return 0;
}