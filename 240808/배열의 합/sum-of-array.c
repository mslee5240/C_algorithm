#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[4][4] = { 0 };

    for (int i = 0; i < 4; ++i) {
        int sum_val = 0;
        for (int j = 0; j < 4; ++j) {
            scanf("%d", &nArr[i][j]);
            sum_val += nArr[i][j];
        }
        printf("%d\n", sum_val);
    }

    
    return 0;
}