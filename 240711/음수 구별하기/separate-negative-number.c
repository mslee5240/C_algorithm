#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    // == 기호는 값 뿐만이 아니라 type도 일치해야 함
    int n = 0;

    scanf("%d%*c", &n);

    printf("%d\n", n);
    
    if (n < 0) {
        printf("minus\n");
    }

    return 0;
}