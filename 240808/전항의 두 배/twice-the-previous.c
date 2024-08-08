#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };
    scanf("%d %d%*c", &nArr[0], &nArr[1]);

    for (int i = 2; i < 10; ++i) {
        nArr[i] = nArr[i - 1] + (2 * nArr[i - 2]);
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d ", nArr[i]);
    }

    return 0;
}