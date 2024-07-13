#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d%*c", &b, &a);
    
    for (int i = b; i >= a; i -= 2) {
        printf("%d ", i);
    }

    return 0;
}