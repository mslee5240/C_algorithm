#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // and는 or 보다 연산자 우선순위가 높기 때문에, 먼저 계산된다.

    int n = 0 ;
    scanf("%d%*c", &n);

    if ((n % 2 != 0 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0)) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}