#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n_1 = 0;
    scanf("%d", &n_1);

    int sum_val = 0, n_2 = 0;

    for (int i = 0; i < n_1; i++) {
        scanf("%d", &n_2);

        if (n_2 % 2 == 1 && n_2 % 3 == 0) {
            sum_val += n_2;
        }
    }

    printf("%d", sum_val);

    return 0;
}