#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, sum_val = 0, cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (0 <= n && n <= 200) {
            sum_val += n;
            cnt++;
        }
        
    }

    printf("%d %.1f", sum_val, (double)sum_val / cnt);

    return 0;
}