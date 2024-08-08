#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[100] = { 0 };

    int i;
    for (i = 0; i < 100; ++i) {
        scanf("%d%*c", &nArr[i]);
        if (nArr[i] == 0) {
            break;
        }
    }

    for (int j = 0; j < i; ++j) {
        if (nArr[j] % 2) {
            printf("%d ", nArr[j] + 3);
        }
        else {
            printf("%d ", nArr[j] / 2);
        }
    }
    
    return 0;
}