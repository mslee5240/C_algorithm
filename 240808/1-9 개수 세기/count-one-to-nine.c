#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    int nArr[100] = { 0 };
    int cntArr[9] = { 0 };

    for (int i = 0; i < n; ++i) {
        scanf("%d%*c", &nArr[i]);
        int tmp = nArr[i];
        cntArr[tmp - 1] += 1;
    }

    for (int i = 0; i < 9; ++i) {
        printf("%d\n", cntArr[i]);
    }

    return 0;
}