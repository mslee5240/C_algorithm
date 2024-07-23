#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int cnt = 0;

    while (1) {
        if (n == 1) {
            break;
        }
        n /= 2;
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}