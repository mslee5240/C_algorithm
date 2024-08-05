#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int a = 0, b = 0;

    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &a, &b);
        int product_val = 1;
        for (int j = a; j <= b; ++j) {
            product_val *= j;
        }
        printf("%d\n", product_val);
    }

    return 0;
}