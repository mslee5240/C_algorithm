#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    double dArr[5] = { 0.0 };
    double sum_val = 0.0;

    for (int i = 0; i < n; ++i) {
        scanf("%lf%*c", &dArr[i]);
        sum_val += dArr[i];
    }

    double avg = sum_val / n;

    printf("%.1lf\n", avg);

    if (avg >= 4.0) {
        printf("Perfect");
    }
    else if (avg >= 3.0) {
        printf("Good");
    }
    else {
        printf("Poor");
    }

    return 0;
}