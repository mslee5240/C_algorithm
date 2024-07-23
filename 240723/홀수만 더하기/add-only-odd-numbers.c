#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int sum_val = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &n);
        if (n % 2 == 1 && n % 3 == 0)
            sum_val += n;
    }

    printf("%d", sum_val);

    return 0;
}