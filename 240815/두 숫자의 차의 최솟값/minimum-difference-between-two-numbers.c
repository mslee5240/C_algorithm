#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0 ;
    scanf("%d", &n);

    int nArr[10] = { 0 };

    for (int i = 0; i < n; ++i) {
        scanf("%d", &nArr[i]);
    }
    int min = 100;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int tmp = nArr[i] - nArr[j];
            if (tmp < 0) {
                tmp = -tmp;
            }
            if (tmp < min) {
                min = tmp;
            }
        }
    }
    printf("%d", min);

    return 0;
}