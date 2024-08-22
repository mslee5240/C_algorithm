#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr_1[10][10] = { 0 };
    int nArr_2[10][10] = { 0 };
    int new_Arr[10][10] = { 0 };

    int n = 0, m = 0;
    scanf("%d %d%*c", &n, &m);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d%*c", &nArr_1[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d%*c", &nArr_2[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (nArr_1[i][j] != nArr_2[i][j]) {
                new_Arr[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", new_Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}