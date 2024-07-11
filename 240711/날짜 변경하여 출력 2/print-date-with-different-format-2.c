#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int m = 0, d = 0, y = 0;

    scanf("%d-%d-%d%*c", &m, &d, &y);

    printf("%d.%d.%d\n", y, m, d);
    
    return 0;
}