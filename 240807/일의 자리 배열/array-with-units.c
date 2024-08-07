#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };
    scanf("%d %d%*c", &nArr[0], &nArr[1]);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", nArr[i]);
        if (i > 0) {
            nArr[i + 1] = (nArr[i - 1] + nArr[i]) % 10;
        }
    }


    return 0;
}