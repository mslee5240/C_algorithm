#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[10] = { 0 };
    int tmp = 0;

    for (int i = 0; i < 10; ++i) {
        scanf("%d%*c", &nArr[i]);

        if (nArr[i] == 0) {
            tmp = i;
            break;
        }
    }

    for (int j = tmp - 1; j >= 0; --j) {
        printf("%d ", nArr[j]);
    }

    
    return 0;
}