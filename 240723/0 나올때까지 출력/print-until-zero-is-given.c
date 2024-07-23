#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // for loop 의 초기화식, 조건식, 증감식을 모두 생략하면 for 내부의 코드가 무한 반복

    int n = 0;

    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        printf("%d\n", n);
    }

    return 0;
}