#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[100] = { 0 };
    int evenArr[100] = { 0 };
    int n = 0;
    scanf("%d%*c", &n);

    int j = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d%*c", &nArr[i]);
        if (nArr[i] % 2 == 0) {
            evenArr[j] = nArr[i];
            ++j;
        }
    }

    for (int i = 0; i < j; i++) {
        printf("%d ", evenArr[i]);
    }

    return 0;
}