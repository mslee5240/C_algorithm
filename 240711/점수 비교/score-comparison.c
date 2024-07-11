#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a_math = 0, a_eng = 0;
    int b_math = 0, b_eng = 0;
    scanf("%d %d%*c", &a_math, &a_eng);
    scanf("%d %d%*c", &b_math, &b_eng);

    printf("%d\n", a_math > b_math && a_eng > b_eng);
    
    return 0;
}