#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[100][100] = { 0 };

    int n = 0, m = 0;
    scanf("%d %d", &n, &m);

    int num = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            nArr[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", nArr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}