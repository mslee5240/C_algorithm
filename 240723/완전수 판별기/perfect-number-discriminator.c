#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int sum_val = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum_val += i;
        }
    }

    if (sum_val == n) {
        printf("P");
    }
    else {
        printf("N");
    }
    
    return 0;
}