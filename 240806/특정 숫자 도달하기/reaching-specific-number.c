#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };

    for (int i = 0; i < 10; ++i) {
        scanf("%d%*c", &nArr[i]);
    }

    int j = 0;
    int sum_val = 0;
    while (nArr[j] < 250) {
        sum_val += nArr[j];
        ++j;
        
        if (j == 10) {
            break;
        }
    }

    printf("%d %.1f", sum_val, (double)sum_val / j);

    return 0;
}