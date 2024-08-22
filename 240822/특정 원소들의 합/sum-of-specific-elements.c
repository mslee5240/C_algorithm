#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[4][4] = { 0 };

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            scanf("%d%*c", &nArr[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            sum += nArr[i][j];
        }
    }

    printf("%d", sum);
    
    return 0;
}