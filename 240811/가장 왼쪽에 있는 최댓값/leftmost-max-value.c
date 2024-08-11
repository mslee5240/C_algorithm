#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int nArr[1000] = { 0 };
    int cnt[1000] = { 0 };
    int max_val = 0;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &nArr[i]);
        if (nArr[i] > max_val) {
            max_val = nArr[i];
            cnt[i]++;
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (cnt[i]) {
            printf("%d ", i + 1);
        }
    }


    return 0;
}