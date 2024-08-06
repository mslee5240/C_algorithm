#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int nArr[100] = { 0 };

    for (int i = 0; i < n; ++i) {
        scanf("%d", &nArr[i]);
    }

    for (int j = n - 1; j >= 0; --j) {
        if (nArr[j] % 2 == 0) {
            printf("%d ", nArr[j]);
        }
    }

    return 0;
}