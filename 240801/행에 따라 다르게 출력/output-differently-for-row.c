#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int cnt = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i % 2 == 0) {
                cnt++;
                printf("%d ", cnt);
            }
            else {
                cnt += 2;
                printf("%d ", cnt);
            }
        }
        printf("\n");
    }
    
    return 0;
}