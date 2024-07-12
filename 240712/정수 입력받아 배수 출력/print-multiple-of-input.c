#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    for (int i = 1; i <= 5; i++) {
        printf("%d ", n * i);
    }

    return 0;
}