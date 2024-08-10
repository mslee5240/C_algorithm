#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int nArr[100] = { 0 };
    int max_val = -999, min_val = 999;

    for (int i = 0; i < 100; ++i) {
        scanf("%d", &nArr[i]);
        if (nArr[i] == 999 || nArr[i] == -999) {
            break;
        }
        if (nArr[i] > max_val) {
            max_val = nArr[i];
        }
        if (nArr[i] < min_val) {
            min_val = nArr[i];
        }
    }
    printf("%d %d", max_val, min_val);

    return 0;
}