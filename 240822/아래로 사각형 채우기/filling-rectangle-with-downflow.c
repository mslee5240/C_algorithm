#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int nArr[10][10] = { 0 };

    int cnt = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <n; ++j) {
            nArr[j][i] = cnt++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <n; ++j) {
            printf("%d ", nArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}