#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int y = 0, m = 0, d = 0;

    scanf("%d.%d.%d%*c", &y, &m, &d);

    printf("%d-%d-%d", m, d, y);
    
    return 0;
}