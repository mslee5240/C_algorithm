#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double a = 0.0, b = 0.0, c = 0.0;

    scanf("%lf %lf %lf%*c", &a, &b, &c);

    printf("%.3lf\n%.3lf\n%.3lf", a, b, c);

    return 0;
}