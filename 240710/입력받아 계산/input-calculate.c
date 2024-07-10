#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0;

    scanf("%d%*c", &a); // visual code에서는 scanf_s 사용하기

    printf("%d", a + 2);

    return 0;
}