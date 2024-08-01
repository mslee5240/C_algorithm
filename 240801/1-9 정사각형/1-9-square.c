#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int cnt = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (cnt > 9) {
                cnt -= 9;
            }
            printf("%d", cnt);
            ++cnt;
        }
        printf("\n");
    }

    return 0;
}