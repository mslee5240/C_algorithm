#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[99] = { 0 };
    int cntArr[9] = { 0 };

    int i;
    for (i = 0; i < 99; ++i) {
        scanf("%d", &nArr[i]);
        if (nArr[i] == 0) {
            break;
        }
    }

    for (int j = 0; j < i; ++j) {
        int n = 0;
        n = nArr[j] / 10;
        if (n > 0) {
            ++cntArr[n - 1];
        }
    }

    for (int j = 0; j < 9; ++j) {
        printf("%d - %d\n", j + 1, cntArr[j]);
    }
    
    return 0;
}