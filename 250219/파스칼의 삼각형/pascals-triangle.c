#include <stdio.h>

int main() {
    // Please write your code here.
    int n = 0;
    scanf("%d", &n);

    int nArr[15][15] = { 0 };
    for (int i = 0; i < n; i++) {
        nArr[i][0] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < i + 1; j++) {
            nArr[i][j] = nArr[i - 1][j - 1] + nArr[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%d ", nArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}