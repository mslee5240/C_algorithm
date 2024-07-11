#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    if (n >= 3000) {
        printf("book");
    }
    else if (n >= 1000) {
        printf("mask");
    }
    else if (n >= 500) {
        printf("pen");
    }
    else {
        printf("no");
    }

    return 0;
}