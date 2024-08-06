#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };
    int sum_val = 0, even_cnt = 0;

    for (int i = 0; i < 10; ++i) {
        scanf("%d%*c", &nArr[i]);

        if (nArr[i] == 0) {
            break;
        }

        if (nArr[i] % 2 == 0) {
            sum_val += nArr[i];
            even_cnt++;
        }
    }

    printf("%d %d", even_cnt, sum_val);
    
    return 0;
}