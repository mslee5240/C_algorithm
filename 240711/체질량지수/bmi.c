#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int h = 0, w = 0;
    scanf("%d %d%*c", &h, &w);

    int b = 0;
    b = (10000 * w) / (h * h);

    printf("%d\n", b);
    
    if (b >= 25) {
        printf("Obesity\n");
    }
    
    return 0;
}