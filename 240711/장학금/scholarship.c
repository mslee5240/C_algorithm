#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    scanf("%d %d%*c", &a, &b);

    if (a < 90 || b < 90) {
        printf("0");
    }
    else if (b < 95) {
        printf("50000");
    }
    else {
        printf("100000");
    }
	
    return 0;

    return 0;
}