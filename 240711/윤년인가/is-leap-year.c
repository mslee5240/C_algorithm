#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int y = 0;
    scanf("%d%*c", &y);

    if ((y % 4 == 0) && (y % 100 != 0 || y % 400 == 0)) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}