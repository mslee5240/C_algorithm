#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)  {
            cnt += 1;
        }
    }

    printf("%d", cnt);

    return 0;
}