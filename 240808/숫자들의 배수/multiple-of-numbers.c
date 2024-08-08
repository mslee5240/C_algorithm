#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    int nArr[100] = { 0 };
    for (int i = 0; i < 100; ++i) {
        nArr[i] = n * (i + 1);
    }

    int cnt = 0;
    for (int i = 0; i < 100; ++i) {
        printf("%d ", nArr[i]);
        if (nArr[i] % 5 == 0) {
            ++cnt;
        }
        if (cnt == 2) {
            break;
        }
    }
    
    return 0;
}