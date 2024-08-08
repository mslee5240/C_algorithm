#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[2] = { 0 };
    int cntArr[10] = { 0 };

    scanf("%d %d", &nArr[0], &nArr[1]);

    while (nArr[0] > 1) {
        int tmp = nArr[0];
        nArr[0] /= nArr[1];
        ++cntArr[tmp % nArr[1]];
    }

    int sum_val = 0;
    for (int i = 0; i < nArr[1]; ++i) {
        sum_val += cntArr[i] * cntArr[i];
    }


    printf("%d", sum_val);

    return 0;
}