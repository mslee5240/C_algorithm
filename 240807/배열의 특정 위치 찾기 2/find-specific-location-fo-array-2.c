#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };

    int odd_sum = 0;
    int even_sum = 0;

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &nArr[i]);
        if (i % 2 == 0) {
            odd_sum += nArr[i];
        }
        else {
            even_sum += nArr[i];
        }
    }

    int result = 0;
    if (odd_sum > even_sum) {
        result = odd_sum - even_sum;
    }
    else {
        result = even_sum - odd_sum;
    }

    printf("%d", result);

    return 0;
}