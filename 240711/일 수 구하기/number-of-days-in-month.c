#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int y = 0;
    scanf("%d%*c", &y);

    if (y == 2) {
        printf("28");
    }
    else {  
        // ((y <= 7 && y % 2 == 1) || (y > 7 && y % 2 == 0)) 이 코드를 삼항연산자로!
        if ((y <= 7) ? y % 2 == 1 : y % 2 == 0) {
            printf("31");
        }
        else {
            printf("30");
        }
    }

    return 0;
}