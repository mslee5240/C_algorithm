#include <stdio.h>

int main() {
    // Please write your code here.
    int n = 0;
    scanf("%d", &n);
    int nArray[100][100] = { 0 };

    for (int i = 0; i < n; i++) {
        nArray[0][i] = 1;
        nArray[i][0] = 1;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            nArray[i][j] = nArray[i][j - 1] + nArray[i - 1][j] + nArray[i  -1][j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", nArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}