#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double a = 0.0;

    scanf("%lf%*c", &a);

    printf("%.2lf", a + 1.5);

    return 0;
}