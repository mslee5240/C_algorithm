#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr_1[3][3] = { 0 };
    int nArr_2[3][3] = { 0 };

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d%*c", &nArr_1[i][j]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d%*c", &nArr_2[i][j]);
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", nArr_1[i][j] * nArr_2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}