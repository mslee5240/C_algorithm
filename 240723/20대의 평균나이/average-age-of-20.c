#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nAge = 0, sum_val = 0, cnt = 0;

    while (1) {
        scanf("%d", &nAge);
        if (nAge > 29 || nAge < 20) {
            printf("%.2f", (double)sum_val / cnt);
            break;
        }
        sum_val += nAge;
        cnt++;
    }

    return 0;
}