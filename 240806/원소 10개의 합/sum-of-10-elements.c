#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum_val = 0;

    for (int i = 0; i < 10; ++i) {
        int n = 0;
        scanf("%d%*c", &n);
        sum_val += n;
    }

    printf("%d\n", sum_val);
    
    return 0;
}