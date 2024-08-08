#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[100] = { 0 };

    int n = 0;
    scanf("%d", &n);

    nArr[0] = 1;
    nArr[1] = n;

    for (int i = 1; i < 100; ++i) {
        nArr[i + 1] = nArr[i - 1] + nArr[i];
        printf("%d ", nArr[i - 1]);
        if (nArr[i + 1] >= 100) {
            printf("%d %d", nArr[i], nArr[i + 1]);
            break;
        }
    }
    
    return 0;
}