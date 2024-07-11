#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int width = 0, heigh = 0;
    
    scanf("%d %d%*c", &width, &heigh);

    width += 8;
    heigh *= 3;

    printf("%d\n%d\n%d\n", width, heigh, width * heigh);

    return 0;
}