#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };

    for (int i = 0; i < 10; ++i) {
        scanf("%d%*c", &nArr[i]);
        if (nArr[i] % 3 == 0) {
            printf("%d", nArr[i - 1]);
            break;
        }
    }

    return 0;
}