#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    
    int cnt = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            printf("%d ", cnt);
            ++cnt;
        }
        printf("\n");
    }

    return 0;
}