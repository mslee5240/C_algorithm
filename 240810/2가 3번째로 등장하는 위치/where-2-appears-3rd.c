#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int nArr[100] = { 0 };

    for (int i = 0; i < n; ++i) {
        scanf("%d", &nArr[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (nArr[i] == 2) {
            ++cnt;
        }
        if (cnt == 3) {
            printf("%d", i + 1);
            break;
        }
    }
    
    return 0;
}