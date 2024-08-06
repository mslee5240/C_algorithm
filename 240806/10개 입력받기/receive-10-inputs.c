#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };
    int sum_val = 0;
    int tmp = 0;

    for (int i = 0; i < 10; ++i) {
        scanf("%d%*c", &nArr[i]);
        if (nArr[i] == 0) {
            break;
        }
        sum_val += nArr[i];
        tmp++;
    }

    printf("%d %.1lf\n", sum_val, (double)sum_val / tmp);
    
    return 0;
}