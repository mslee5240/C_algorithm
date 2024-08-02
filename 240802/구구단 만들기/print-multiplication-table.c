#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요. 
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= 9; ++i) {
        for (int j = b; j >= a; j -= 2) {
            printf("%d * %d = %d", j, i, j * i);
            if (j > 2 && a != b) {
                printf(" / ");
            }
        }
        printf("\n");
    }

    return 0;
}