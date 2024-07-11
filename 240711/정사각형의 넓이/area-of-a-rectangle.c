#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    
    scanf("%d%*c", &n);

    printf("%d\n", n * n);
    
    if (n < 5) {
        printf("tiny\n");
    }

    return 0;
}