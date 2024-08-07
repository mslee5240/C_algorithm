#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[100] = { 0 };

    for (int i = 0; i < 100; ++i) {
        scanf("%d%*c", &nArr[i]);

        if (nArr[i] == 0) {
            int sum_val = nArr[i - 1] + nArr[i - 2] + nArr[i - 3];
            printf("%d", sum_val);
            break;
        }
    }

    return 0;
}