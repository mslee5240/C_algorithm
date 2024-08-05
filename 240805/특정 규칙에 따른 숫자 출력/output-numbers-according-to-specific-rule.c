#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    int cnt = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > j) {
                printf("  ");
            }
            else {
                printf("%d ", cnt);
                ++cnt;
            }

            if (cnt == 10) {
                cnt = 1;
            }
        }
        printf("\n");
    }
    
    return 0;
}