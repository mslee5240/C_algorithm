#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);

    for (int i = n; i > 0; --i) {
        for (int j = n; j > 0; --j) {
            if (i < j) {
                printf("  ");
            }
            else {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}