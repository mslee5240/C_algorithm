#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double n = 0.0, ft = 30.48;

    scanf("%lf%*c", &n);

    printf("%.1lf", n * ft);

    return 0;
}