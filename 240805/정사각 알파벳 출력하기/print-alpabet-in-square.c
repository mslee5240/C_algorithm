#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    int ch = 65;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    
    return 0;
}