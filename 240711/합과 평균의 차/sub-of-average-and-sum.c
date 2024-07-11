#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0;
    int sum = 0, avr = 0;

    scanf("%d %d %d%*c", &a, &b, &c);

    sum = a + b + c;
    avr = sum / 3;

    printf("%d\n%d\n%d\n", sum, avr, sum - avr);

    return 0;
}