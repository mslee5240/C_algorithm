#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[5][5] = { 0 };

    for (int i = 0; i < 5; i++) {
        nArr[0][i] = 1;
        nArr[i][0] = 1;
    }

    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            nArr[i][j] = nArr[i - 1][j] + nArr[i][j - 1];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", nArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}