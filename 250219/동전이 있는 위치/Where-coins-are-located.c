#include <stdio.h>

int main() {
    // Please write your code here.
    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int nArr[10][10] = { 0 };

    for (int i = 0; i < m; i++) {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        nArr[a - 1][b - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", nArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}