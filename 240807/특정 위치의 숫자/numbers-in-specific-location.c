#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };
    int sum_val = 0;

    for (int i = 0; i < 10; ++i) {
        scanf("%d%*c", &nArr[i]);
        if (i == 2 || i == 4 || i == 9) {
            sum_val += nArr[i];
        }
    }

    printf("%d\n", sum_val);
    
    return 0;
}