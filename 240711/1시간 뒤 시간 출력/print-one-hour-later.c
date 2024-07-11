#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int h = 0, m = 0;

    scanf("%d:%d%*c", &h, &m);

    printf("%d:%d", h + 1, m);
    
    return 0;
}