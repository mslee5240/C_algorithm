#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            printf("0 ");
        }
        else if (i > 10 && (i % 3 == 1 || (i % 30) <= 9)){
            printf("0 ");
        }
        else {
            printf("%d ", i);
        }
    }
    
    return 0;
}