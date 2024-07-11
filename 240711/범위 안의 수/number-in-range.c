#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0;
    scanf("%d%*c", &a);

    if (a >= 10 && a <= 20) {
        printf("yes");
    }
    else {
        printf("no");
    }
    
    return 0;
}