#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[100][100] = { 0 };

    int n = 0;
    scanf("%d", &n);

    int cnt = 1;
    for (int j = n - 1; j >= 0; j--) {
        if (j % 2 == 1) {
            for (int i = n - 1; i >= 0; i--) {
                nArr[i][j] = cnt++;
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                nArr[i][j] = cnt++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", nArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}