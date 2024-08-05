#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);

        int even_sum = 0;
        for (int j = a; j <= b; ++j) {
            if (j % 2 == 0) {
                even_sum += j;
            }
        }
        printf("%d\n", even_sum);
    }

    return 0;
}