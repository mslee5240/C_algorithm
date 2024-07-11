#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d%*c", &a, &b, &c);

    if ((a > b) && (a > c)) {
        printf("%d", a);
    }
    else if (b > c) {
        printf("%d", b);
    }
    else {
        printf("%d", c);
    }
       
    return 0;
}