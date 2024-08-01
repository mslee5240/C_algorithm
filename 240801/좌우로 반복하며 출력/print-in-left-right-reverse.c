#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int flag = 1;

    for (int i = 0; i < n; ++i) {
        if (flag) {
            for (int j = 1; j <= n; ++j) {
                printf("%d", j);
            }
        }
        else {
            for (int j = n; j > 0; --j) {
                printf("%d", j);
            }
        }
        flag = !flag;
        printf("\n");
    }
    return 0;
}