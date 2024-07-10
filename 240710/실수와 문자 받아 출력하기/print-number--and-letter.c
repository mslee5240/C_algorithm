#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c = 0;
    double a = 0.0, b = 0.0;

    scanf("%c %lf %lf%*c", &c, &a, &b);

    printf("%c\n%.2lf\n%.2lf", c, a, b);
    
    return 0;
}