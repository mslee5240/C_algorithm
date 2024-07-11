#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    if (n >= 80) {
        printf("pass");
    }
    else {
        printf("%d more score", 80 - n);
    }
    
    return 0;
}