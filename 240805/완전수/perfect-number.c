#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int cnt = 0;

    for (int i = a; i <= b; ++i) {
        int sum = 0;
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            ++cnt;
        }
    }

    printf("%d", cnt);

    return 0;
}