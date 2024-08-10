#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    int nArr[100] = { 0 };
    for (int i = 0; i < n; ++i) {
        scanf("%d%*c", &nArr[i]);
    }
    for (int j = 0; j < n - 1; ++j) {
        for (int i = j + 1; i < n; ++i) {
            if (nArr[j] < nArr[i]) {
                int tmp = nArr[j];
                nArr[j] = nArr[i];
                nArr[i] = tmp;
            }
        }
    }


    printf("%d %d\n", nArr[0], nArr[1]);

    return 0;
}