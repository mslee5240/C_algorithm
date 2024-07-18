#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int i = 1, nInput = 0;
    while (i <= 100) {
        scanf("%d%*c", &nInput);
        if (nInput % 2 == 1 && nInput % 3 == 0) {
            printf("%d\n", nInput);
        }
        i++;
    }
    return 0;
}