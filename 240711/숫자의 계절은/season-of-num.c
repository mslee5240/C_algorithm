#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m = 0;
    scanf("%d%*c", &m);

    if (m > 11 || m < 3) {
        printf("Winter");
    }
    else if (m < 6) {
        printf("Spring");
    }
    else if (m < 9) {
        printf("Summer");
    }
    else {
        printf("Fall");
    }

    return 0;
}