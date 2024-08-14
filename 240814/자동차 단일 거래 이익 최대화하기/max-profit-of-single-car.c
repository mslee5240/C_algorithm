#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int nArr[1000] = { 0 };

    for (int i = 0; i < n; ++i) {
        scanf("%d", &nArr[i]);
    }

    int profit_max = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((nArr[j] - nArr[i]) > profit_max) {
                profit_max = nArr[j] - nArr[i];
            }
        }
    }

    printf("%d", profit_max);
    
    
    return 0;
}