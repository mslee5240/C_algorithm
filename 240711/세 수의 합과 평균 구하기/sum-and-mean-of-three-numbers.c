#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0;

    scanf("%d %d %d%*c", &a, &b, &c);

    printf("%d\n%d", a + b + c, (a + b + c) / 3);
    
    return 0;
}