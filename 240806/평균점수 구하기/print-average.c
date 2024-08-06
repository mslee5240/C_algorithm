#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double dArr[8] = { 0.0 };

    double sum_val = 0.0;

    for (int i = 0; i < 8; ++i) {
        scanf("%lf%*c", &dArr[i]);
        sum_val += dArr[i];
    }

    printf("%.1lf", sum_val / 8);
    
    return 0;
}