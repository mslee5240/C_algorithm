#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    int prod = 1;

    if (b == 0) {
        prod = 1;
    }
    else {
        for (int i = 0; i < b; i++) {
            prod *= a;
        }
    }

    printf("%d", prod);
    
    return 0;
}