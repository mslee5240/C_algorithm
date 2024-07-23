#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, cnt = 0;

    while (cnt < 3) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            printf("%d\n", n / 2);
            cnt++;
        }
    }
    
    return 0;
}