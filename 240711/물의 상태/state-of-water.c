#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d%*c", &n);

    if (n < 0) {
        printf("ice");
    }
    else if (n >= 100) {
        printf("vapor");
    }
    else {
        printf("water");
    }

    return 0;
}