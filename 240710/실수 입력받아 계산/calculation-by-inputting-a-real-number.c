#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double a = 0.0, b = 0.0;

    scanf("%lf %lf%*c", &a, &b);

    printf("%.2lf", a + b);
    
    return 0;
}