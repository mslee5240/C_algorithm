#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        int star = 0;
        if (i < n) {
            star = i + 1;
        }
        else {
            star = 2 * n - 1 - i;
        }
        
        for (int j = 0; j < star; j++) {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}