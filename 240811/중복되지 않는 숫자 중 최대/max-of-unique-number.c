#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int nArr[1000] = { 0 };
    int cntArr[1000] = { 0 };

    scanf("%d%*c", &n);

    
    for (int i = 0; i < n; ++i) {
        scanf("%d%*c", &nArr[i]);
        cntArr[nArr[i]]++;
    }

    int max_val = -1;
    for (int i = 0; i < 1000; ++i) {
        if (nArr[i] > max_val && cntArr[nArr[i]] <= 1) {
            max_val = nArr[i];
        }
    }

    printf("%d", max_val);
    
    return 0;
}