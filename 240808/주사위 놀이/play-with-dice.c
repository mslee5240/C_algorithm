#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cntArr[6] = { 0 };

    for (int i = 0; i < 10; ++i) {
        int n = 0;
        scanf("%d", &n);
        ++cntArr[n - 1];
    }

    for (int i = 0; i < 6; ++i) {
        printf("%d - %d\n", i + 1, cntArr[i]);
    }

    return 0;
}