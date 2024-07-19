#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int mul_3 = 0, mul_5 = 0, nInput = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &nInput);
        
        if (nInput % 3 == 0) {
            mul_3++;
        }
        if (nInput % 5 == 0) {
            mul_5++;
        }
    }

    printf("%d %d", mul_3, mul_5);

    return 0;
}