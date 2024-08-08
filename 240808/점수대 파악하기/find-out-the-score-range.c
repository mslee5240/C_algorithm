#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cntArr[10] = { 0 };
    int nArr[100] = { 0 };

    for (int i = 0; i < 100; ++i) {
        scanf("%d", &nArr[i]);
        if (nArr[i] == 0) {
            break;
        }
        if (nArr[i] < 10) {
            continue;
        }
        ++cntArr[(nArr[i] / 10) - 1];
    }

    for (int i = 9; i >= 0; --i) {
        printf("%d - %d\n", (i + 1) * 10, cntArr[i]);
    }

    return 0;
}