#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    for (int i = 1; i <= n; i++) {
        int a = 0;
        scanf("%d%*c", &a);
        if (a % 2 == 1 && a % 3 == 0) {
            printf("%d\n", a);
        }
    }
    return 0;
}